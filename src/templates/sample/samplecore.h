#ifndef SAMPLECORE_H
#define SAMPLECORE_H

#include "core/templatecore.h"


class SampleEditor;
class SampleSimulator;

class SampleCore : public TemplateCore {
    Q_OBJECT

  public:
    // Constructors and destructors.
    explicit SampleCore(TemplateEntryPoint *entry_point, QObject *parent = 0);
    virtual ~SampleCore();

    GenerationResult generateMobileApplication(const QString &input_apk_file, QString &output_file);

  private:
    SampleEditor *sampleEditor();
    SampleSimulator *sampleSimulator();
};

#endif
