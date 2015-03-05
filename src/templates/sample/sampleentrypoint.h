#ifndef SAMPLEENTRYPOINT_H
#define SAMPLEENTRYPOINT_H

#include "core/templateentrypoint.h"


class SampleEntryPoint : public TemplateEntryPoint {
    Q_OBJECT

  public:
    // Constructors and destructors.
    explicit SampleEntryPoint(TemplateFactory *parent);
    virtual ~SampleEntryPoint();

    TemplateCore *createNewCore();
    TemplateCore *loadCoreFromBundleData(const QString& raw_data);

  signals:

  public slots:
};

#endif
