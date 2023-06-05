/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 28), // "on_cmp_name_edit_btn_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "updateCMPname"
QT_MOC_LITERAL(4, 55, 4), // "name"
QT_MOC_LITERAL(5, 60, 29), // "on_add_pos_pushButton_clicked"
QT_MOC_LITERAL(6, 90, 13), // "on_AddPos_fun"
QT_MOC_LITERAL(7, 104, 8), // "Position"
QT_MOC_LITERAL(8, 113, 7), // "new_pos"
QT_MOC_LITERAL(9, 121, 29), // "on_add_vac_pushButton_clicked"
QT_MOC_LITERAL(10, 151, 13), // "on_AddVac_fun"
QT_MOC_LITERAL(11, 165, 20), // "on_AddEmpToCheck_fun"
QT_MOC_LITERAL(12, 186, 8), // "Employee"
QT_MOC_LITERAL(13, 195, 3), // "emp"
QT_MOC_LITERAL(14, 199, 5), // "vac_i"
QT_MOC_LITERAL(15, 205, 13) // "on_AddEmp_Yes"

    },
    "MainWindow\0on_cmp_name_edit_btn_clicked\0"
    "\0updateCMPname\0name\0on_add_pos_pushButton_clicked\0"
    "on_AddPos_fun\0Position\0new_pos\0"
    "on_add_vac_pushButton_clicked\0"
    "on_AddVac_fun\0on_AddEmpToCheck_fun\0"
    "Employee\0emp\0vac_i\0on_AddEmp_Yes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,
      11,    2,   66,    2, 0x08 /* Private */,
      15,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cmp_name_edit_btn_clicked(); break;
        case 1: _t->updateCMPname((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_add_pos_pushButton_clicked(); break;
        case 3: _t->on_AddPos_fun((*reinterpret_cast< Position(*)>(_a[1]))); break;
        case 4: _t->on_add_vac_pushButton_clicked(); break;
        case 5: _t->on_AddVac_fun((*reinterpret_cast< Position(*)>(_a[1]))); break;
        case 6: _t->on_AddEmpToCheck_fun((*reinterpret_cast< Employee(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_AddEmp_Yes((*reinterpret_cast< Employee(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
