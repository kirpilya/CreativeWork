/****************************************************************************
** Meta object code from reading C++ file 'otklik_1_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../otklik_1_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'otklik_1_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_otklik_1_dialog_t {
    QByteArrayData data[9];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_otklik_1_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_otklik_1_dialog_t qt_meta_stringdata_otklik_1_dialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "otklik_1_dialog"
QT_MOC_LITERAL(1, 16, 13), // "AddEmpToCheck"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "Employee"
QT_MOC_LITERAL(4, 40, 3), // "emp"
QT_MOC_LITERAL(5, 44, 5), // "vac_i"
QT_MOC_LITERAL(6, 50, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 72, 28), // "on_pos_comboBox_IndexChanged"
QT_MOC_LITERAL(8, 101, 5) // "index"

    },
    "otklik_1_dialog\0AddEmpToCheck\0\0Employee\0"
    "emp\0vac_i\0on_pushButton_clicked\0"
    "on_pos_comboBox_IndexChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_otklik_1_dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   34,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void otklik_1_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<otklik_1_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddEmpToCheck((*reinterpret_cast< Employee(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pos_comboBox_IndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (otklik_1_dialog::*)(Employee , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&otklik_1_dialog::AddEmpToCheck)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject otklik_1_dialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_otklik_1_dialog.data,
    qt_meta_data_otklik_1_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *otklik_1_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *otklik_1_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_otklik_1_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int otklik_1_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void otklik_1_dialog::AddEmpToCheck(Employee _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
