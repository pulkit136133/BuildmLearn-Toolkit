/****************************************************************************
** Meta object code from reading C++ file 'sampleeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/templates/sample/sampleeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sampleeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SampleEditor_t {
    QByteArrayData data[24];
    char stringdata[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SampleEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SampleEditor_t qt_meta_stringdata_SampleEditor = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 17),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 7),
QT_MOC_LITERAL(4, 40, 19),
QT_MOC_LITERAL(5, 60, 11),
QT_MOC_LITERAL(6, 72, 12),
QT_MOC_LITERAL(7, 85, 5),
QT_MOC_LITERAL(8, 91, 12),
QT_MOC_LITERAL(9, 104, 14),
QT_MOC_LITERAL(10, 119, 15),
QT_MOC_LITERAL(11, 135, 10),
QT_MOC_LITERAL(12, 146, 13),
QT_MOC_LITERAL(13, 160, 8),
QT_MOC_LITERAL(14, 169, 15),
QT_MOC_LITERAL(15, 185, 10),
QT_MOC_LITERAL(16, 196, 13),
QT_MOC_LITERAL(17, 210, 8),
QT_MOC_LITERAL(18, 219, 15),
QT_MOC_LITERAL(19, 235, 14),
QT_MOC_LITERAL(20, 250, 16),
QT_MOC_LITERAL(21, 267, 8),
QT_MOC_LITERAL(22, 276, 6),
QT_MOC_LITERAL(23, 283, 4)
    },
    "SampleEditor\0setEditorsEnabled\0\0enabled\0"
    "updateQuestionCount\0addQuestion\0"
    "loadQuestion\0index\0saveQuestion\0"
    "removeQuestion\0onAnswerChanged\0"
    "new_answer\0onHintChanged\0new_hint\0"
    "onAuthorChanged\0new_author\0onNameChanged\0"
    "new_name\0configureUpDown\0moveQuestionUp\0"
    "moveQuestionDown\0question\0answer\0hint\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SampleEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08,
       4,    0,   87,    2, 0x08,
       5,    0,   88,    2, 0x08,
       6,    1,   89,    2, 0x08,
       8,    0,   92,    2, 0x08,
       9,    0,   93,    2, 0x08,
      10,    1,   94,    2, 0x08,
      12,    1,   97,    2, 0x08,
      14,    1,  100,    2, 0x08,
      16,    1,  103,    2, 0x08,
      18,    0,  106,    2, 0x08,
      19,    0,  107,    2, 0x08,
      20,    0,  108,    2, 0x08,
       5,    3,  109,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   21,   22,   23,

       0        // eod
};

void SampleEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SampleEditor *_t = static_cast<SampleEditor *>(_o);
        switch (_id) {
        case 0: _t->setEditorsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateQuestionCount(); break;
        case 2: _t->addQuestion(); break;
        case 3: _t->loadQuestion((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->saveQuestion(); break;
        case 5: _t->removeQuestion(); break;
        case 6: _t->onAnswerChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onHintChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onAuthorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->onNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->configureUpDown(); break;
        case 11: _t->moveQuestionUp(); break;
        case 12: _t->moveQuestionDown(); break;
        case 13: _t->addQuestion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject SampleEditor::staticMetaObject = {
    { &TemplateEditor::staticMetaObject, qt_meta_stringdata_SampleEditor.data,
      qt_meta_data_SampleEditor,  qt_static_metacall, 0, 0}
};


const QMetaObject *SampleEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SampleEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SampleEditor.stringdata))
        return static_cast<void*>(const_cast< SampleEditor*>(this));
    return TemplateEditor::qt_metacast(_clname);
}

int SampleEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TemplateEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
