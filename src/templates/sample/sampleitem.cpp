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

#include "templates/sample/sampleitem.h"

#include "definitions/definitions.h"

#include <QProcess>


SampleItem::SampleItem(QWidget *parent) : QWidget(parent), m_ui(new Ui::SampleItem) {
  m_ui->setupUi(this);

  QFont caption_font = m_ui->m_lblQuestionNumber->font();
  caption_font.setPointSize(caption_font.pointSize() + SIMULATOR_HEADER_SIZE_INCREASE);
  m_ui->m_lblQuestionNumber->setFont(caption_font);

  connect(m_ui->m_btnNext, SIGNAL(clicked()), this, SIGNAL(nextCardRequested()));
  connect(m_ui->m_btnPrevious, SIGNAL(clicked()), this, SIGNAL(previousCardRequested()));
  connect(m_ui->m_btnFlip, SIGNAL(clicked()), this, SLOT(speak()));
}

SampleItem::~SampleItem() {
  delete m_ui;
}

void SampleItem::reset() {
  //
}

void SampleItem::setQuestion(const SampleQuestion &question, int question_number, int total_questions) {
  m_ui->m_btnPrevious->setEnabled(question_number != 1);
  m_ui->m_lblQuestionNumber->setText(tr("Question number %1 of %2").arg(QString::number(question_number),
                                                                        QString::number(total_questions)));
  m_ui->m_lblQuestionText->setText(question.question());
  m_ui->m_lblHint->setText(question.hint());
  m_ui->m_answer->setText(QString("<span style=\" font-size:14pt;\">%1</span>").arg(question.answer()));
}

void SampleItem::speak() {
    QString program = "say";
    QStringList arguments;

    QString textToSpeak = m_ui->m_answer->toPlainText();

    arguments << textToSpeak;

    QProcess *speakText = new QProcess();
    speakText->start(program, arguments);

}
