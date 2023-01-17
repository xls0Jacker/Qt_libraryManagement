/****************************************************************************
** Meta object code from reading C++ file 'updatecds.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../updatecds.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatecds.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_updateCDs_t {
    uint offsetsAndSizes[16];
    char stringdata0[10];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[8];
    char stringdata5[22];
    char stringdata6[25];
    char stringdata7[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_updateCDs_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_updateCDs_t qt_meta_stringdata_updateCDs = {
    {
        QT_MOC_LITERAL(0, 9),  // "updateCDs"
        QT_MOC_LITERAL(10, 8),  // "sendData"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 1),  // "s"
        QT_MOC_LITERAL(22, 7),  // "getData"
        QT_MOC_LITERAL(30, 21),  // "on_exitButton_clicked"
        QT_MOC_LITERAL(52, 24),  // "on_refreshButton_clicked"
        QT_MOC_LITERAL(77, 24)   // "on_confirmButton_clicked"
    },
    "updateCDs",
    "sendData",
    "",
    "s",
    "getData",
    "on_exitButton_clicked",
    "on_refreshButton_clicked",
    "on_confirmButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_updateCDs[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   47,    2, 0x08,    3 /* Private */,
       5,    0,   50,    2, 0x08,    5 /* Private */,
       6,    0,   51,    2, 0x08,    6 /* Private */,
       7,    0,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject updateCDs::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_updateCDs.offsetsAndSizes,
    qt_meta_data_updateCDs,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_updateCDs_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<updateCDs, std::true_type>,
        // method 'sendData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_exitButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refreshButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirmButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void updateCDs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<updateCDs *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->getData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_exitButton_clicked(); break;
        case 3: _t->on_refreshButton_clicked(); break;
        case 4: _t->on_confirmButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (updateCDs::*)(QString );
            if (_t _q_method = &updateCDs::sendData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *updateCDs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *updateCDs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_updateCDs.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int updateCDs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void updateCDs::sendData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
