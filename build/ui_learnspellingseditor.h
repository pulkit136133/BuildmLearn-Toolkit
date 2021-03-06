/********************************************************************************
** Form generated from reading UI file 'learnspellingseditor.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNSPELLINGSEDITOR_H
#define UI_LEARNSPELLINGSEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "lineeditwithstatus.h"
#include "plaintoolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_LearnSpellingsEditor
{
public:
    QGridLayout *gridLayout;
    QGroupBox *m_groupItemEditor;
    QFormLayout *formLayout;
    LineEditWithStatus *m_txtTitle;
    QLabel *label;
    QLabel *label_2;
    LineEditWithStatus *m_txtDescription;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    PlainToolButton *m_btnItemAdd;
    PlainToolButton *m_btnItemDown;
    PlainToolButton *m_btnItemRemove;
    PlainToolButton *m_btnItemUp;
    QSpacerItem *horizontalSpacer;
    QListWidget *m_listItems;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    LineEditWithStatus *m_txtAuthor;
    QLabel *label_4;
    LineEditWithStatus *m_txtName;
    QLabel *label_6;
    LineEditWithStatus *m_txtNumberOfItems;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LearnSpellingsEditor)
    {
        if (LearnSpellingsEditor->objectName().isEmpty())
            LearnSpellingsEditor->setObjectName(QStringLiteral("LearnSpellingsEditor"));
        LearnSpellingsEditor->resize(446, 384);
        gridLayout = new QGridLayout(LearnSpellingsEditor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_groupItemEditor = new QGroupBox(LearnSpellingsEditor);
        m_groupItemEditor->setObjectName(QStringLiteral("m_groupItemEditor"));
        formLayout = new QFormLayout(m_groupItemEditor);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        m_txtTitle = new LineEditWithStatus(m_groupItemEditor);
        m_txtTitle->setObjectName(QStringLiteral("m_txtTitle"));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_txtTitle);

        label = new QLabel(m_groupItemEditor);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(m_groupItemEditor);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        m_txtDescription = new LineEditWithStatus(m_groupItemEditor);
        m_txtDescription->setObjectName(QStringLiteral("m_txtDescription"));

        formLayout->setWidget(1, QFormLayout::FieldRole, m_txtDescription);


        gridLayout->addWidget(m_groupItemEditor, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(LearnSpellingsEditor);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        m_btnItemAdd = new PlainToolButton(groupBox_2);
        m_btnItemAdd->setObjectName(QStringLiteral("m_btnItemAdd"));
        m_btnItemAdd->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(m_btnItemAdd, 1, 0, 1, 1);

        m_btnItemDown = new PlainToolButton(groupBox_2);
        m_btnItemDown->setObjectName(QStringLiteral("m_btnItemDown"));
        m_btnItemDown->setEnabled(false);
        m_btnItemDown->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(m_btnItemDown, 1, 3, 1, 1);

        m_btnItemRemove = new PlainToolButton(groupBox_2);
        m_btnItemRemove->setObjectName(QStringLiteral("m_btnItemRemove"));
        m_btnItemRemove->setEnabled(false);
        m_btnItemRemove->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(m_btnItemRemove, 1, 1, 1, 1);

        m_btnItemUp = new PlainToolButton(groupBox_2);
        m_btnItemUp->setObjectName(QStringLiteral("m_btnItemUp"));
        m_btnItemUp->setEnabled(false);
        m_btnItemUp->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(m_btnItemUp, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 4, 1, 1);

        m_listItems = new QListWidget(groupBox_2);
        m_listItems->setObjectName(QStringLiteral("m_listItems"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_listItems->sizePolicy().hasHeightForWidth());
        m_listItems->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(m_listItems, 0, 0, 1, 5);


        gridLayout->addWidget(groupBox_2, 0, 1, 3, 1);

        groupBox_3 = new QGroupBox(LearnSpellingsEditor);
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

        m_txtNumberOfItems = new LineEditWithStatus(groupBox_3);
        m_txtNumberOfItems->setObjectName(QStringLiteral("m_txtNumberOfItems"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, m_txtNumberOfItems);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 220, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(LearnSpellingsEditor);

        QMetaObject::connectSlotsByName(LearnSpellingsEditor);
    } // setupUi

    void retranslateUi(QWidget *LearnSpellingsEditor)
    {
        LearnSpellingsEditor->setWindowTitle(QApplication::translate("LearnSpellingsEditor", "Form", 0));
        m_groupItemEditor->setTitle(QApplication::translate("LearnSpellingsEditor", "Word editor", 0));
        label->setText(QApplication::translate("LearnSpellingsEditor", "Word", 0));
        label_2->setText(QApplication::translate("LearnSpellingsEditor", "Meaning", 0));
        groupBox_2->setTitle(QApplication::translate("LearnSpellingsEditor", "Active items", 0));
#ifndef QT_NO_TOOLTIP
        m_btnItemAdd->setToolTip(QApplication::translate("LearnSpellingsEditor", "Add new item.", 0));
#endif // QT_NO_TOOLTIP
        m_btnItemAdd->setText(QApplication::translate("LearnSpellingsEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        m_btnItemDown->setToolTip(QApplication::translate("LearnSpellingsEditor", "Move item down.", 0));
#endif // QT_NO_TOOLTIP
        m_btnItemDown->setText(QApplication::translate("LearnSpellingsEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        m_btnItemRemove->setToolTip(QApplication::translate("LearnSpellingsEditor", "Remove selected item.", 0));
#endif // QT_NO_TOOLTIP
        m_btnItemRemove->setText(QApplication::translate("LearnSpellingsEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        m_btnItemUp->setToolTip(QApplication::translate("LearnSpellingsEditor", "Move item up.", 0));
#endif // QT_NO_TOOLTIP
        m_btnItemUp->setText(QApplication::translate("LearnSpellingsEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        m_listItems->setToolTip(QApplication::translate("LearnSpellingsEditor", "This list contains already added questions.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("LearnSpellingsEditor", "Collection metadata", 0));
        label_3->setText(QApplication::translate("LearnSpellingsEditor", "Author", 0));
        label_4->setText(QApplication::translate("LearnSpellingsEditor", "Collection title", 0));
        label_6->setText(QApplication::translate("LearnSpellingsEditor", "Number of words", 0));
    } // retranslateUi

};

namespace Ui {
    class LearnSpellingsEditor: public Ui_LearnSpellingsEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNSPELLINGSEDITOR_H
