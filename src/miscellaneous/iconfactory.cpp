/*
  Copyright (c) 2012, BuildmLearn Contributors listed at http://buildmlearn.org/people/
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:

  * Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

  * Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

  * Neither the name of the BuildmLearn nor the names of its
    contributors may be used to endorse or promote products derived from
    this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "miscellaneous/iconfactory.h"

#include "miscellaneous/application.h"
#include "miscellaneous/settings.h"

#include <QBuffer>


QPointer<IconFactory> IconFactory::s_instance;

IconFactory::IconFactory(QObject *parent) : QObject(parent) {
}

IconFactory::~IconFactory() {
  qDebug("Destroying IconFactory instance.");
}

IconFactory *IconFactory::instance() {
  if (s_instance.isNull()) {
    s_instance = new IconFactory(qApp);
  }

  return s_instance;
}

void IconFactory::setupSearchPaths() {
  QIcon::setThemeSearchPaths(QStringList() << APP_THEME_PATH);
  qDebug("Available icon theme paths: %s.",
         qPrintable(QIcon::themeSearchPaths().replaceInStrings(QRegExp("^|$"),
                                                               "\'").join(", ")));
}



void IconFactory::setCurrentIconTheme(const QString &theme_name) {
  qApp->settings()->setValue(APP_CFG_GUI, "icon_theme", theme_name);
}

void IconFactory::loadCurrentIconTheme() {
  QStringList installed_themes = installedIconThemes();
  QString theme_name_from_settings = qApp->settings()->value(APP_CFG_GUI,
                                                             "icon_theme",
                                                             APP_THEME_DEFAULT).toString();

  if (m_currentIconTheme == theme_name_from_settings) {
    qDebug("Icon theme '%s' already loaded.",
           qPrintable(theme_name_from_settings));
    return;
  }

  // Display list of installed themes.
  qDebug("Installed icon themes are: %s.",
         qPrintable(QStringList(installed_themes).replaceInStrings(QRegExp("^|$"),
                                                                   "\'").join(", ")));

  if (installed_themes.contains(theme_name_from_settings)) {
    // Desired icon theme is installed and can be loaded.
    qDebug("Loading icon theme '%s'.", qPrintable(theme_name_from_settings));
    m_currentIconTheme = theme_name_from_settings;
  }
  else {
    // Desired icon theme is not currently available.
    // Install "default" icon theme instead.
    qDebug("Icon theme '%s' cannot be loaded because it is not installed. "
           "No icon theme is loaded now.",
           qPrintable(theme_name_from_settings));
    m_currentIconTheme = APP_NO_THEME;
  }
}

QStringList IconFactory::installedIconThemes() const {
  QStringList icon_theme_names;
  icon_theme_names << APP_NO_THEME;

  // Iterate all directories with icon themes.
  QStringList icon_themes_paths = QIcon::themeSearchPaths();
  icon_themes_paths.removeDuplicates();

  foreach (const QString &icon_path, icon_themes_paths) {
    QDir icon_dir(icon_path);

    // Iterate all icon themes in this directory.
    foreach (const QString &icon_theme_path, icon_dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot |
                                                                QDir::Readable | QDir::CaseSensitive |
                                                                QDir::NoSymLinks,
                                                                QDir::Time)) {
      icon_theme_names << icon_theme_path;
    }
  }

  icon_theme_names.removeDuplicates();
  return icon_theme_names;
}
