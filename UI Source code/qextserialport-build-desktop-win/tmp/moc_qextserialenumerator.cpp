/****************************************************************************
** Meta object code from reading C++ file 'qextserialenumerator.h'
**
** Created: Mon Oct 3 22:49:34 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qextserialport_lean/qextserialenumerator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qextserialenumerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QextSerialRegistrationWidget[] = {

 // content:
       5,       // revision
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

static const char qt_meta_stringdata_QextSerialRegistrationWidget[] = {
    "QextSerialRegistrationWidget\0"
};

const QMetaObject QextSerialRegistrationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QextSerialRegistrationWidget,
      qt_meta_data_QextSerialRegistrationWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QextSerialRegistrationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QextSerialRegistrationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QextSerialRegistrationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QextSerialRegistrationWidget))
        return static_cast<void*>(const_cast< QextSerialRegistrationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QextSerialRegistrationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QextSerialEnumerator[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x05,
      58,   22,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QextSerialEnumerator[] = {
    "QextSerialEnumerator\0\0info\0"
    "deviceDiscovered(QextPortInfo)\0"
    "deviceRemoved(QextPortInfo)\0"
};

const QMetaObject QextSerialEnumerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QextSerialEnumerator,
      qt_meta_data_QextSerialEnumerator, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QextSerialEnumerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QextSerialEnumerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QextSerialEnumerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QextSerialEnumerator))
        return static_cast<void*>(const_cast< QextSerialEnumerator*>(this));
    return QObject::qt_metacast(_clname);
}

int QextSerialEnumerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: deviceDiscovered((*reinterpret_cast< const QextPortInfo(*)>(_a[1]))); break;
        case 1: deviceRemoved((*reinterpret_cast< const QextPortInfo(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QextSerialEnumerator::deviceDiscovered(const QextPortInfo & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QextSerialEnumerator::deviceRemoved(const QextPortInfo & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
