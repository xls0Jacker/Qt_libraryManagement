/****************************************************************************
** Meta object code from reading C++ file 'inquirebycategory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Library/inquirebycategory.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inquirebycategory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_inquireByCategory_t {
    uint offsetsAndSizes[12];
    char stringdata0[18];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[22];
    char stringdata5[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_inquireByCategory_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_inquireByCategory_t qt_meta_stringdata_inquireByCategory = {
    {
        QT_MOC_LITERAL(0, 17),  // "inquireByCategory"
        QT_MOC_LITERAL(18, 22),  // "on_BooksButton_clicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 20),  // "on_CDsButton_clicked"
        QT_MOC_LITERAL(63, 21),  // "on_exitButton_clicked"
        QT_MOC_LITERAL(85, 23)   // "on_updateButton_clicked"
    },
    "inquireByCategory",
    "on_BooksButton_clicked",
    "",
    "on_CDsButton_clicked",
    "on_exitButton_clicked",
    "on_updateButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_inquireByCategory[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject inquireByCategory::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_inquireByCategory.offsetsAndSizes,
    qt_meta_data_inquireByCategory,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_inquireByCategory_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<inquireByCategory, std::true_type>,
        // method 'on_BooksButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CDsButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exitButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void inquireByCategory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<inquireByCategory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_BooksButton_clicked(); break;
        case 1: _t->on_CDsButton_clicked(); break;
        case 2: _t->on_exitButton_clicked(); break;
        case 3: _t->on_updateButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *inquireByCategory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *inquireByCategory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_inquireByCategory.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int inquireByCategory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
