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

#ifndef SAMPLEEDITOR_H
#define SAMPLEEDITOR_H

#include "core/templateeditor.h"

#include "ui_sampleeditor.h"
#include "templates/sample/samplequestion.h"


namespace Ui {
  class SampleEditor;
}

class SampleEditor : public TemplateEditor {
    Q_OBJECT

    friend class SampleSimulator;
    friend class SampleCore;

  public:
    explicit SampleEditor(TemplateCore *core, QWidget *parent = 0);
    virtual ~SampleEditor();

    bool canGenerateApplications();
    QString generateBundleData();
    bool loadBundleData(const QString &bundle_data);

    QList<SampleQuestion> activeQuestions() const;

    QString projectName();
    QString authorName();

  private:
    void checkAuthor();
    void checkHint();
    void checkQuestion();
    void checkAnswer();
    void checkName();

  private slots:
    void setEditorsEnabled(bool enabled);
    void updateQuestionCount();
    void addQuestion();
    void loadQuestion(int index);
    void saveQuestion();
    void removeQuestion();
    void onAnswerChanged(const QString &new_answer);
    void onHintChanged(const QString &new_hint);
    void onAuthorChanged(const QString &new_author);
    void onNameChanged(const QString &new_name);
    void configureUpDown();
    void moveQuestionUp();
    void moveQuestionDown();
    void addQuestion(const QString& question, const QString& answer, const QString& hint);//, const QString& picture_path);

  private:
    Ui::SampleEditor *m_ui;
    SampleQuestion m_activeQuestion;
};

#endif
