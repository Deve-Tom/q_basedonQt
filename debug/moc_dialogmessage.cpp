/****************************************************************************
** Meta object code from reading C++ file 'dialogmessage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/messageWindow/dialogmessage.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogmessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDialogMessageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDialogMessageENDCLASS = QtMocHelpers::stringData(
    "DialogMessage",
    "thisSendMessage",
    "",
    "data",
    "on_senMessage_clicked",
    "on_iniInfor",
    "friend_id",
    "user_id",
    "token",
    "recieveInfor",
    "message",
    "reset",
    "current_id",
    "setNet",
    "netService*",
    "_net"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDialogMessageENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[14];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[22];
    char stringdata5[12];
    char stringdata6[10];
    char stringdata7[8];
    char stringdata8[6];
    char stringdata9[13];
    char stringdata10[8];
    char stringdata11[6];
    char stringdata12[11];
    char stringdata13[7];
    char stringdata14[12];
    char stringdata15[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDialogMessageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDialogMessageENDCLASS_t qt_meta_stringdata_CLASSDialogMessageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "DialogMessage"
        QT_MOC_LITERAL(14, 15),  // "thisSendMessage"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 4),  // "data"
        QT_MOC_LITERAL(36, 21),  // "on_senMessage_clicked"
        QT_MOC_LITERAL(58, 11),  // "on_iniInfor"
        QT_MOC_LITERAL(70, 9),  // "friend_id"
        QT_MOC_LITERAL(80, 7),  // "user_id"
        QT_MOC_LITERAL(88, 5),  // "token"
        QT_MOC_LITERAL(94, 12),  // "recieveInfor"
        QT_MOC_LITERAL(107, 7),  // "message"
        QT_MOC_LITERAL(115, 5),  // "reset"
        QT_MOC_LITERAL(121, 10),  // "current_id"
        QT_MOC_LITERAL(132, 6),  // "setNet"
        QT_MOC_LITERAL(139, 11),  // "netService*"
        QT_MOC_LITERAL(151, 4)   // "_net"
    },
    "DialogMessage",
    "thisSendMessage",
    "",
    "data",
    "on_senMessage_clicked",
    "on_iniInfor",
    "friend_id",
    "user_id",
    "token",
    "recieveInfor",
    "message",
    "reset",
    "current_id",
    "setNet",
    "netService*",
    "_net"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogMessageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   53,    2, 0x08,    3 /* Private */,
       5,    3,   54,    2, 0x08,    4 /* Private */,
       9,    1,   61,    2, 0x08,    8 /* Private */,
      11,    3,   64,    2, 0x0a,   10 /* Public */,
      13,    1,   71,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   12,    7,    8,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject DialogMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogMessageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DialogMessage, std::true_type>,
        // method 'thisSendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_senMessage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_iniInfor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'recieveInfor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setNet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<netService *, std::false_type>
    >,
    nullptr
} };

void DialogMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogMessage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->thisSendMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_senMessage_clicked(); break;
        case 2: _t->on_iniInfor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 3: _t->recieveInfor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->reset((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 5: _t->setNet((*reinterpret_cast< std::add_pointer_t<netService*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
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
            using _t = void (DialogMessage::*)(const QString & );
            if (_t _q_method = &DialogMessage::thisSendMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *DialogMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogMessageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DialogMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DialogMessage::thisSendMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
