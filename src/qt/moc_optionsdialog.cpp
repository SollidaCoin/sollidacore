/****************************************************************************
** Meta object code from reading C++ file 'optionsdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/optionsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProxyAddressValidator_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProxyAddressValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProxyAddressValidator_t qt_meta_stringdata_ProxyAddressValidator = {
    {
QT_MOC_LITERAL(0, 0, 21) // "ProxyAddressValidator"

    },
    "ProxyAddressValidator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProxyAddressValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ProxyAddressValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ProxyAddressValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_ProxyAddressValidator.data,
      qt_meta_data_ProxyAddressValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProxyAddressValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProxyAddressValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProxyAddressValidator.stringdata0))
        return static_cast<void*>(const_cast< ProxyAddressValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int ProxyAddressValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_OptionsDialog_t {
    QByteArrayData data[17];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OptionsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OptionsDialog_t qt_meta_stringdata_OptionsDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OptionsDialog"
QT_MOC_LITERAL(1, 14, 13), // "proxyIpChecks"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "QValidatedLineEdit*"
QT_MOC_LITERAL(4, 49, 10), // "pUiProxyIp"
QT_MOC_LITERAL(5, 60, 10), // "nProxyPort"
QT_MOC_LITERAL(6, 71, 16), // "setOkButtonState"
QT_MOC_LITERAL(7, 88, 6), // "fState"
QT_MOC_LITERAL(8, 95, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(9, 118, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(10, 138, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(11, 162, 28), // "on_hideTrayIcon_stateChanged"
QT_MOC_LITERAL(12, 191, 18), // "showRestartWarning"
QT_MOC_LITERAL(13, 210, 11), // "fPersistent"
QT_MOC_LITERAL(14, 222, 16), // "clearStatusLabel"
QT_MOC_LITERAL(15, 239, 26), // "updateProxyValidationState"
QT_MOC_LITERAL(16, 266, 22) // "updateDefaultProxyNets"

    },
    "OptionsDialog\0proxyIpChecks\0\0"
    "QValidatedLineEdit*\0pUiProxyIp\0"
    "nProxyPort\0setOkButtonState\0fState\0"
    "on_resetButton_clicked\0on_okButton_clicked\0"
    "on_cancelButton_clicked\0"
    "on_hideTrayIcon_stateChanged\0"
    "showRestartWarning\0fPersistent\0"
    "clearStatusLabel\0updateProxyValidationState\0"
    "updateDefaultProxyNets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptionsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   74,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x28 /* Private | MethodCloned */,
      14,    0,   87,    2, 0x08 /* Private */,
      15,    0,   88,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionsDialog *_t = static_cast<OptionsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->proxyIpChecks((*reinterpret_cast< QValidatedLineEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->setOkButtonState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_resetButton_clicked(); break;
        case 3: _t->on_okButton_clicked(); break;
        case 4: _t->on_cancelButton_clicked(); break;
        case 5: _t->on_hideTrayIcon_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->showRestartWarning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showRestartWarning(); break;
        case 8: _t->clearStatusLabel(); break;
        case 9: _t->updateProxyValidationState(); break;
        case 10: _t->updateDefaultProxyNets(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OptionsDialog::*_t)(QValidatedLineEdit * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsDialog::proxyIpChecks)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OptionsDialog.data,
      qt_meta_data_OptionsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsDialog.stringdata0))
        return static_cast<void*>(const_cast< OptionsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OptionsDialog::proxyIpChecks(QValidatedLineEdit * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
