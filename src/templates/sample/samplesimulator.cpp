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

#include "templates/sample/samplesimulator.h"

#include "core/templatecore.h"
#include "templates/sample/sampleeditor.h"
#include "templates/sample/sampleitem.h"
#include "definitions/definitions.h"
#include "miscellaneous/application.h"
#include "miscellaneous/skinfactory.h"


SampleSimulator::SampleSimulator(TemplateCore *core, QWidget *parent)
  : TemplateSimulator(core, parent),
    m_ui(new Ui::SampleSimulator) {
  m_ui->setupUi(this);

  QFont caption_font = m_ui->m_lblHeading->font();
  caption_font.setPointSize(caption_font.pointSize() + SIMULATOR_HEADING_SIZE_INCREASE);
  m_ui->m_lblHeading->setFont(caption_font);

  connect(m_ui->m_btnStart, SIGNAL(clicked()), this, SLOT(start()));
  connect(m_ui->m_btnRestart, SIGNAL(clicked()), this, SLOT(restart()));
}

SampleSimulator::~SampleSimulator() {
  qDebug("Destroying SampleSimulator instance.");

  delete m_ui;
}

bool SampleSimulator::startSimulation() {
  SampleEditor *editor = static_cast<SampleEditor*>(core()->editor());

  if (!editor->canGenerateApplications()) {
    // There are no active questions or quiz does not
    // containt its name or author name.
    return false;
  }

  // Remove existing flash cards.
  while (m_ui->m_phoneWidget->count() > 3) {
    QWidget *question_widget = m_ui->m_phoneWidget->widget(2);

    m_ui->m_phoneWidget->removeWidget(question_widget);
    question_widget->deleteLater();
  }

  // Load the questions, setup the quiz and start it.
  m_ui->m_btnStart->setEnabled(true);
  m_ui->m_lblAuthor->setText(editor->m_ui->m_txtAuthor->lineEdit()->text());
  m_ui->m_lblHeading->setText(editor->m_ui->m_txtName->lineEdit()->text());

  int question_number = 1;
  QList<SampleQuestion> questions = editor->activeQuestions();

  foreach (const SampleQuestion &question, questions) {
    SampleItem *item = new SampleItem(m_ui->m_phoneWidget);

    connect(item, SIGNAL(nextCardRequested()), this, SLOT(moveToNextCard()));
    connect(item, SIGNAL(previousCardRequested()), this, SLOT(moveToPreviousCard()));

    item->setQuestion(question, question_number++, questions.size());
    m_ui->m_phoneWidget->insertWidget(m_ui->m_phoneWidget->count() - 1, item);
  }

  // Go to "start" page and begin.
  m_ui->m_phoneWidget->setCurrentIndex(1);
  return true;
}

bool SampleSimulator::stopSimulation() {
  m_ui->m_phoneWidget->setCurrentIndex(0);

  emit canGoBackChanged(false);

  return true;
}

bool SampleSimulator::goBack() {
  return false;
}

void SampleSimulator::start() {
  moveToNextCard();
}

void SampleSimulator::restart() {
  m_ui->m_phoneWidget->setCurrentIndex(1);
}

void SampleSimulator::moveToNextCard() {
  int current_index = m_ui->m_phoneWidget->currentIndex();

  if (current_index < m_ui->m_phoneWidget->count() - 2) {
    // We are not on the last flash card.
    static_cast<SampleItem*>(m_ui->m_phoneWidget->widget(current_index + 1))->reset();
  }

  m_ui->m_phoneWidget->setCurrentIndex(current_index + 1);
}

void SampleSimulator::moveToPreviousCard() {
  int current_index = m_ui->m_phoneWidget->currentIndex();

  if (current_index > 1) {
    // We are not on the first flash card.
    static_cast<SampleItem*>(m_ui->m_phoneWidget->widget(current_index - 1))->reset();
  }

  m_ui->m_phoneWidget->setCurrentIndex(current_index - 1);
}
