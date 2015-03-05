/********************************************************************************
** Form generated from reading UI file 'sampleitem.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPLEITEM_H
#define UI_SAMPLEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SampleItem
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_lblQuestionNumber;
    QFrame *line;
    QLabel *m_lblQuestionText;
    QLabel *m_lblDummy;
    QTextBrowser *m_answer;
    QSpacerItem *verticalSpacer;
    QLabel *m_lblHint;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *m_btnPrevious;
    QPushButton *m_btnFlip;
    QPushButton *m_btnNext;

    void setupUi(QWidget *SampleItem)
    {
        if (SampleItem->objectName().isEmpty())
            SampleItem->setObjectName(QStringLiteral("SampleItem"));
        SampleItem->resize(351, 431);
        verticalLayout = new QVBoxLayout(SampleItem);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_lblQuestionNumber = new QLabel(SampleItem);
        m_lblQuestionNumber->setObjectName(QStringLiteral("m_lblQuestionNumber"));

        verticalLayout->addWidget(m_lblQuestionNumber);

        line = new QFrame(SampleItem);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        m_lblQuestionText = new QLabel(SampleItem);
        m_lblQuestionText->setObjectName(QStringLiteral("m_lblQuestionText"));
        m_lblQuestionText->setWordWrap(true);

        verticalLayout->addWidget(m_lblQuestionText);

        m_lblDummy = new QLabel(SampleItem);
        m_lblDummy->setObjectName(QStringLiteral("m_lblDummy"));
        m_lblDummy->setEnabled(true);

        verticalLayout->addWidget(m_lblDummy);

        m_answer = new QTextBrowser(SampleItem);
        m_answer->setObjectName(QStringLiteral("m_answer"));

        verticalLayout->addWidget(m_answer);

        verticalSpacer = new QSpacerItem(17, 152, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        m_lblHint = new QLabel(SampleItem);
        m_lblHint->setObjectName(QStringLiteral("m_lblHint"));
        m_lblHint->setAlignment(Qt::AlignCenter);
        m_lblHint->setWordWrap(true);

        verticalLayout->addWidget(m_lblHint);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        m_btnPrevious = new QPushButton(SampleItem);
        m_btnPrevious->setObjectName(QStringLiteral("m_btnPrevious"));

        horizontalLayout_3->addWidget(m_btnPrevious);

        m_btnFlip = new QPushButton(SampleItem);
        m_btnFlip->setObjectName(QStringLiteral("m_btnFlip"));

        horizontalLayout_3->addWidget(m_btnFlip);

        m_btnNext = new QPushButton(SampleItem);
        m_btnNext->setObjectName(QStringLiteral("m_btnNext"));

        horizontalLayout_3->addWidget(m_btnNext);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(SampleItem);

        QMetaObject::connectSlotsByName(SampleItem);
    } // setupUi

    void retranslateUi(QWidget *SampleItem)
    {
        SampleItem->setWindowTitle(QApplication::translate("SampleItem", "Form", 0));
        m_lblQuestionNumber->setText(QApplication::translate("SampleItem", "Question number", 0));
        m_lblQuestionText->setText(QApplication::translate("SampleItem", "Question text", 0));
        m_lblDummy->setText(QString());
        m_lblHint->setText(QString());
        m_btnPrevious->setText(QApplication::translate("SampleItem", "&Previous", 0));
        m_btnFlip->setText(QApplication::translate("SampleItem", "Speak", 0));
        m_btnNext->setText(QApplication::translate("SampleItem", "&Next", 0));
    } // retranslateUi

};

namespace Ui {
    class SampleItem: public Ui_SampleItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPLEITEM_H
