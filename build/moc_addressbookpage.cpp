/****************************************************************************
** Meta object code from reading C++ file 'addressbookpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/addressbookpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbookpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddressBookPage_t {
    QByteArrayData data[24];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddressBookPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddressBookPage_t qt_meta_stringdata_AddressBookPage = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AddressBookPage"
QT_MOC_LITERAL(1, 16, 11), // "signMessage"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "addr"
QT_MOC_LITERAL(4, 34, 13), // "verifyMessage"
QT_MOC_LITERAL(5, 48, 9), // "sendCoins"
QT_MOC_LITERAL(6, 58, 4), // "done"
QT_MOC_LITERAL(7, 63, 6), // "retval"
QT_MOC_LITERAL(8, 70, 24), // "on_deleteAddress_clicked"
QT_MOC_LITERAL(9, 95, 21), // "on_newAddress_clicked"
QT_MOC_LITERAL(10, 117, 22), // "on_copyAddress_clicked"
QT_MOC_LITERAL(11, 140, 22), // "on_signMessage_clicked"
QT_MOC_LITERAL(12, 163, 24), // "on_verifyMessage_clicked"
QT_MOC_LITERAL(13, 188, 17), // "onSendCoinsAction"
QT_MOC_LITERAL(14, 206, 21), // "on_showQRCode_clicked"
QT_MOC_LITERAL(15, 228, 17), // "onCopyLabelAction"
QT_MOC_LITERAL(16, 246, 12), // "onEditAction"
QT_MOC_LITERAL(17, 259, 23), // "on_exportButton_clicked"
QT_MOC_LITERAL(18, 283, 16), // "selectionChanged"
QT_MOC_LITERAL(19, 300, 14), // "contextualMenu"
QT_MOC_LITERAL(20, 315, 5), // "point"
QT_MOC_LITERAL(21, 321, 16), // "selectNewAddress"
QT_MOC_LITERAL(22, 338, 6), // "parent"
QT_MOC_LITERAL(23, 345, 5) // "begin"

    },
    "AddressBookPage\0signMessage\0\0addr\0"
    "verifyMessage\0sendCoins\0done\0retval\0"
    "on_deleteAddress_clicked\0on_newAddress_clicked\0"
    "on_copyAddress_clicked\0on_signMessage_clicked\0"
    "on_verifyMessage_clicked\0onSendCoinsAction\0"
    "on_showQRCode_clicked\0onCopyLabelAction\0"
    "onEditAction\0on_exportButton_clicked\0"
    "selectionChanged\0contextualMenu\0point\0"
    "selectNewAddress\0parent\0begin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddressBookPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       5,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  108,    2, 0x0a /* Public */,
       8,    0,  111,    2, 0x08 /* Private */,
       9,    0,  112,    2, 0x08 /* Private */,
      10,    0,  113,    2, 0x08 /* Private */,
      11,    0,  114,    2, 0x08 /* Private */,
      12,    0,  115,    2, 0x08 /* Private */,
      13,    0,  116,    2, 0x08 /* Private */,
      14,    0,  117,    2, 0x08 /* Private */,
      15,    0,  118,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    0,  121,    2, 0x08 /* Private */,
      19,    1,  122,    2, 0x08 /* Private */,
      21,    3,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   22,   23,    2,

       0        // eod
};

void AddressBookPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookPage *_t = static_cast<AddressBookPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->verifyMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendCoins((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_deleteAddress_clicked(); break;
        case 5: _t->on_newAddress_clicked(); break;
        case 6: _t->on_copyAddress_clicked(); break;
        case 7: _t->on_signMessage_clicked(); break;
        case 8: _t->on_verifyMessage_clicked(); break;
        case 9: _t->onSendCoinsAction(); break;
        case 10: _t->on_showQRCode_clicked(); break;
        case 11: _t->onCopyLabelAction(); break;
        case 12: _t->onEditAction(); break;
        case 13: _t->on_exportButton_clicked(); break;
        case 14: _t->selectionChanged(); break;
        case 15: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 16: _t->selectNewAddress((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddressBookPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookPage::signMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AddressBookPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookPage::verifyMessage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AddressBookPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookPage::sendCoins)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AddressBookPage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddressBookPage.data,
      qt_meta_data_AddressBookPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddressBookPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddressBookPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddressBookPage.stringdata0))
        return static_cast<void*>(const_cast< AddressBookPage*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddressBookPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void AddressBookPage::signMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AddressBookPage::verifyMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AddressBookPage::sendCoins(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
