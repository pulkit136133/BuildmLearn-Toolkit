#include "templates/sample/sampleentrypoint.h"

#include "templates/sample/samplecore.h"
#include "core/templateeditor.h"
#include "core/templatesimulator.h"


SampleEntryPoint::SampleEntryPoint(TemplateFactory *parent)
  : TemplateEntryPoint(parent) {
  m_baseFolder = "sample";
  m_description = "Choose this template to create sample applications.";
  m_humanName = "Sample";
  m_name = "sample";
  m_thumbnailImage = "thumbnail.png";
  m_typeIndentifier = "Sample";
  m_mobileApplicationApkFile = "SampleApp.apk";
}

SampleEntryPoint::~SampleEntryPoint() {

}

TemplateCore *SampleEntryPoint::createNewCore() {
  return new SampleCore(this, this);
}

TemplateCore *SampleEntryPoint::loadCoreFromBundleData(const QString& raw_data) {
  SampleCore *core = new SampleCore(this, this);
  if (core->editor()->loadBundleData(raw_data)) {
    return core;
  }
  else {
    core->simulator()->deleteLater();
    core->editor()->deleteLater();
    core->deleteLater();
    return NULL;
  }
}
