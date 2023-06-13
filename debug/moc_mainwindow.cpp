/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/mainWindow/mainwindow.h"
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_mainWindow_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[28];
    char stringdata5[26];
    char stringdata6[25];
    char stringdata7[22];
    char stringdata8[9];
    char stringdata9[36];
    char stringdata10[14];
    char stringdata11[7];
    char stringdata12[12];
    char stringdata13[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_mainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_mainWindow_t qt_meta_stringdata_mainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "mainWindow"
        QT_MOC_LITERAL(11, 26),  // "on_closePushButton_clicked"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 24),  // "on_minPushButton_clicked"
        QT_MOC_LITERAL(64, 27),  // "on_closePushButton2_clicked"
        QT_MOC_LITERAL(92, 25),  // "on_minPushButton2_clicked"
        QT_MOC_LITERAL(118, 24),  // "on_MessageButton_clicked"
        QT_MOC_LITERAL(143, 21),  // "on_ListButton_clicked"
        QT_MOC_LITERAL(165, 8),  // "userInfo"
        QT_MOC_LITERAL(174, 35),  // "std::tuple<QString,QString,QS..."
        QT_MOC_LITERAL(210, 13),  // "userInforData"
        QT_MOC_LITERAL(224, 6),  // "setNet"
        QT_MOC_LITERAL(231, 11),  // "netService*"
        QT_MOC_LITERAL(243, 3)   // "net"
    },
    "mainWindow",
    "on_closePushButton_clicked",
    "",
    "on_minPushButton_clicked",
    "on_closePushButton2_clicked",
    "on_minPushButton2_clicked",
    "on_MessageButton_clicked",
    "on_ListButton_clicked",
    "userInfo",
    "std::tuple<QString,QString,QString>",
    "userInforData",
    "setNet",
    "netService*",
    "net"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_mainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    1,   68,    2, 0x0a,    7 /* Public */,
      11,    1,   71,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject mainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_mainWindow.offsetsAndSizes,
    qt_meta_data_mainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_mainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<mainWindow, std::true_type>,
        // method 'on_closePushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_minPushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_closePushButton2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_minPushButton2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MessageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ListButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::tuple<QString,QString,QString>, std::false_type>,
        // method 'setNet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<netService *, std::false_type>
    >,
    nullptr
} };

void mainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_closePushButton_clicked(); break;
        case 1: _t->on_minPushButton_clicked(); break;
        case 2: _t->on_closePushButton2_clicked(); break;
        case 3: _t->on_minPushButton2_clicked(); break;
        case 4: _t->on_MessageButton_clicked(); break;
        case 5: _t->on_ListButton_clicked(); break;
        case 6: _t->userInfo((*reinterpret_cast< std::add_pointer_t<std::tuple<QString,QString,QString>>>(_a[1]))); break;
        case 7: _t->setNet((*reinterpret_cast< std::add_pointer_t<netService*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< netService* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *mainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int mainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
