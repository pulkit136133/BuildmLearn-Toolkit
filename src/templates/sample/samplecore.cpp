#include "templates/sample/samplecore.h"

#include "templates/sample/sampleeditor.h"
#include "templates/sample/samplesimulator.h"
#include "miscellaneous/application.h"
#include "miscellaneous/iofactory.h"
#include "core/templatefactory.h"
#include "core/templategenerator.h"
#include "core/templateentrypoint.h"

#include <QDir>
#include <QTextStream>
#include <QProcess>


SampleCore::SampleCore(TemplateEntryPoint* entry_point, QObject* parent)
  :TemplateCore(entry_point, parent) {
  m_editor = new SampleEditor(this);
  m_simulator = new SampleSimulator(this);
}

SampleCore::~SampleCore() {
  qDebug("Destroying SampleCore instance.");
}

TemplateCore::GenerationResult SampleCore::generateMobileApplication(const QString &input_apk_file, QString &output_file) {
    //Dummy method for generation of APK
  return Success;
}

SampleEditor *SampleCore::sampleEditor() {
  return static_cast<SampleEditor*>(m_editor);
}

SampleSimulator *SampleCore::sampleSimulator() {
  return static_cast<SampleSimulator*>(m_simulator);
}

