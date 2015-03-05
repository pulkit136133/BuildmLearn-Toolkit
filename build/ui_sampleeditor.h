/********************************************************************************
** Form generated from reading UI file 'sampleeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPLEEDITOR_H
#define UI_SAMPLEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "lineeditwithstatus.h"
#include "plaintoolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_SampleEditor
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    LineEditWithStatus *m_txtAuthor;
    QLabel *label_4;
    LineEditWithStatus *m_txtName;
    QLabel *label_6;
    LineEditWithStatus *m_txtNumberOfQuestions;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    PlainToolButton *m_btnQuestionAdd;
    PlainToolButton *m_btnQuestionDown;
    PlainToolButton *m_btnQuestionRemove;
    PlainToolButton *m_btnQuestionUp;
    QSpacerItem *horizontalSpacer;
    QListWidget *m_listQuestions;
    QGroupBox *m_groupQuestionEditor;
    QFormLayout *formLayout;
    QLabel *label;
    LineEditWithStatus *m_txtQuestion;
    QLabel *label_2;
    LineEditWithStatus *m_txtAnswer;
    QLabel *label_7;
    LineEditWithStatus *m_txtHint;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SampleEditor)
    {
        if (SampleEditor->objectName().isEmpty())
            SampleEditor->setObjectName(QStringLiteral("SampleEditor"));
        SampleEditor->resize(585, 382);
        horizontalLayout = new QHBoxLayout(SampleEditor);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(SampleEditor);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 585, 382));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        formLayout_2 = new QFormLayout(groupBox_3);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        m_txtAuthor = new LineEditWithStatus(groupBox_3);
        m_txtAuthor->setObjectName(QStringLiteral("m_txtAuthor"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, m_txtAuthor);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        m_txtName = new LineEditWithStatus(groupBox_3);
        m_txtName->setObjectName(QStringLiteral("m_txtName"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, m_txtName);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        m_txtNumberOfQuestions = new LineEditWithStatus(groupBox_3);
        m_txtNumberOfQuestions->setObjectName(QStringLiteral("m_txtNumberOfQuestions"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, m_txtNumberOfQuestions);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        m_btnQuestionAdd = new PlainToolButton(groupBox_2);
        m_btnQuestionAdd->setObjectName(QStringLiteral("m_btnQuestionAdd"));
        m_btnQuestionAdd->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(m_btnQuestionAdd, 1, 0, 1, 1);

        m_btnQuestionDown = new PlainToolButton(groupBox_2);
        m_btnQuestionDown->setObjectName(QStringLiteral("m_btnQuestionDown"));
        m_btnQuestionDown->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(m_btnQuestionDown, 1, 3, 1, 1);

        m_btnQuestionRemove = new PlainToolButton(groupBox_2);
        m_btnQuestionRemove->setObjectName(QStringLiteral("m_btnQuestionRemove"));
        m_btnQuestionRemove->setEnabled(false);
        m_btnQuestionRemove->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(m_btnQuestionRemove, 1, 1, 1, 1);

        m_btnQuestionUp = new PlainToolButton(groupBox_2);
        m_btnQuestionUp->setObjectName(QStringLiteral("m_btnQuestionUp"));
        m_btnQuestionUp->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(m_btnQuestionUp, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 4, 1, 1);

        m_listQuestions = new QListWidget(groupBox_2);
        m_listQuestions->setObjectName(QStringLiteral("m_listQuestions"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_listQuestions->sizePolicy().hasHeightForWidth());
        m_listQuestions->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(m_listQuestions, 0, 0, 1, 5);


        gridLayout->addWidget(groupBox_2, 0, 1, 4, 1);

        m_groupQuestionEditor = new QGroupBox(scrollAreaWidgetContents);
        m_groupQuestionEditor->setObjectName(QStringLiteral("m_groupQuestionEditor"));
        formLayout = new QFormLayout(m_groupQuestionEditor);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(m_groupQuestionEditor);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        m_txtQuestion = new LineEditWithStatus(m_groupQuestionEditor);
        m_txtQuestion->setObjectName(QStringLiteral("m_txtQuestion"));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_txtQuestion);

        label_2 = new QLabel(m_groupQuestionEditor);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        m_txtAnswer = new LineEditWithStatus(m_groupQuestionEditor);
        m_txtAnswer->setObjectName(QStringLiteral("m_txtAnswer"));

        formLayout->setWidget(1, QFormLayout::FieldRole, m_txtAnswer);

        label_7 = new QLabel(m_groupQuestionEditor);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        m_txtHint = new LineEditWithStatus(m_groupQuestionEditor);
        m_txtHint->setObjectName(QStringLiteral("m_txtHint"));

        formLayout->setWidget(4, QFormLayout::FieldRole, m_txtHint);


        gridLayout->addWidget(m_groupQuestionEditor, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        retranslateUi(SampleEditor);

        QMetaObject::connectSlotsByName(SampleEditor);
    } // setupUi

    void retranslateUi(QWidget *SampleEditor)
    {
        SampleEditor->setWindowTitle(QApplication::translate("SampleEditor", "Form", 0));
        groupBox_3->setTitle(QApplication::translate("SampleEditor", "Sample metadata", 0));
        label_3->setText(QApplication::translate("SampleEditor", "Author", 0));
        label_4->setText(QApplication::translate("SampleEditor", "Collection name", 0));
        label_6->setText(QApplication::translate("SampleEditor", "Number of slides", 0));
        groupBox_2->setTitle(QApplication::translate("SampleEditor", "Active questions", 0));
#ifndef QT_NO_TOOLTIP
        m_btnQuestionAdd->setToolTip(QApplication::translate("SampleEditor", "Add new question.", 0));
#endif // QT_NO_TOOLTIP
        m_btnQuestionAdd->setText(QApplication::translate("SampleEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        m_btnQuestionDown->setToolTip(QApplication::translate("SampleEditor", "Move question down.", 0));
#endif // QT_NO_TOOLTIP
        m_btnQuestionDown->setText(QApplication::translate("SampleEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        m_btnQuestionRemove->setToolTip(QApplication::translate("SampleEditor", "Remove selected question.", 0));
#endif // QT_NO_TOOLTIP
        m_btnQuestionRemove->setText(QApplication::translate("SampleEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        m_btnQuestionUp->setToolTip(QApplication::translate("SampleEditor", "Move question up.", 0));
#endif // QT_NO_TOOLTIP
        m_btnQuestionUp->setText(QApplication::translate("SampleEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        m_listQuestions->setToolTip(QApplication::translate("SampleEditor", "This list contains already added questions.", 0));
#endif // QT_NO_TOOLTIP
        m_groupQuestionEditor->setTitle(QApplication::translate("SampleEditor", "Question editor", 0));
        label->setText(QApplication::translate("SampleEditor", "Title", 0));
        label_2->setText(QApplication::translate("SampleEditor", "Answer", 0));
        label_7->setText(QApplication::translate("SampleEditor", "Hint", 0));
    } // retranslateUi

};

namespace Ui {
    class SampleEditor: public Ui_SampleEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPLEEDITOR_H
