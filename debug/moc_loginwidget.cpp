/****************************************************************************
** Meta object code from reading C++ file 'loginwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/loginWindow/loginwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
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
struct qt_meta_stringdata_loginWidget_t {
    uint offsetsAndSizes[30];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[36];
    char stringdata4[9];
    char stringdata5[8];
    char stringdata6[12];
    char stringdata7[4];
    char stringdata8[13];
    char stringdata9[22];
    char stringdata10[5];
    char stringdata11[12];
    char stringdata12[8];
    char stringdata13[27];
    char stringdata14[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_loginWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_loginWidget_t qt_meta_stringdata_loginWidget = {
    {
        QT_MOC_LITERAL(0, 11),  // "loginWidget"
        QT_MOC_LITERAL(12, 8),  // "useLogin"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 35),  // "std::tuple<QString,QString,QS..."
        QT_MOC_LITERAL(58, 8),  // "userInfo"
        QT_MOC_LITERAL(67, 7),  // "sendNet"
        QT_MOC_LITERAL(75, 11),  // "netService*"
        QT_MOC_LITERAL(87, 3),  // "net"
        QT_MOC_LITERAL(91, 12),  // "on_pushLogin"
        QT_MOC_LITERAL(104, 21),  // "on_currentDataChanged"
        QT_MOC_LITERAL(126, 4),  // "arg1"
        QT_MOC_LITERAL(131, 11),  // "on_radioBtn"
        QT_MOC_LITERAL(143, 7),  // "checked"
        QT_MOC_LITERAL(151, 26),  // "on_closePushButton_clicked"
        QT_MOC_LITERAL(178, 24)   // "on_minPushButton_clicked"
    },
    "loginWidget",
    "useLogin",
    "",
    "std::tuple<QString,QString,QString>",
    "userInfo",
    "sendNet",
    "netService*",
    "net",
    "on_pushLogin",
    "on_currentDataChanged",
    "arg1",
    "on_radioBtn",
    "checked",
    "on_closePushButton_clicked",
    "on_minPushButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_loginWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       5,    1,   59,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   62,    2, 0x08,    5 /* Private */,
       9,    1,   63,    2, 0x08,    6 /* Private */,
      11,    1,   66,    2, 0x08,    8 /* Private */,
      13,    0,   69,    2, 0x08,   10 /* Private */,
      14,    0,   70,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject loginWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_loginWidget.offsetsAndSizes,
    qt_meta_data_loginWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_loginWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<loginWidget, std::true_type>,
        // method 'useLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::tuple<QString,QString,QString>, std::false_type>,
        // method 'sendNet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<netService *, std::false_type>,
        // method 'on_pushLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_currentDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_radioBtn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_closePushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_minPushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void loginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<loginWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->useLogin((*reinterpret_cast< std::add_pointer_t<std::tuple<QString,QString,QString>>>(_a[1]))); break;
        case 1: _t->sendNet((*reinterpret_cast< std::add_pointer_t<netService*>>(_a[1]))); break;
        case 2: _t->on_pushLogin(); break;
        case 3: _t->on_currentDataChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_radioBtn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_closePushButton_clicked(); break;
        case 6: _t->on_minPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< netService* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (loginWidget::*)(std::tuple<QString,QString,QString> );
            if (_t _q_method = &loginWidget::useLogin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (loginWidget::*)(netService * );
            if (_t _q_method = &loginWidget::sendNet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *loginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_loginWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int loginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void loginWidget::useLogin(std::tuple<QString,QString,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void loginWidget::sendNet(netService * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
