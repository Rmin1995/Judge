/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      37,   11,   11,   11, 0x08,
      62,   11,   11,   11, 0x08,
      87,   11,   11,   11, 0x08,
     109,   11,   11,   11, 0x08,
     136,   11,   11,   11, 0x08,
     162,   11,   11,   11, 0x08,
     187,   11,   11,   11, 0x08,
     211,   11,   11,   11, 0x08,
     235,   11,   11,   11, 0x08,
     265,   11,   11,   11, 0x08,
     287,   11,   11,   11, 0x08,
     313,  308,   11,   11, 0x08,
     362,  308,   11,   11, 0x08,
     411,  308,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_yourCodeBtn_clicked()\0"
    "on_corrCodeBtn_clicked()\0"
    "on_tstMakerBtn_clicked()\0on_judgeBtn_clicked()\0"
    "on_actionReset_triggered()\0"
    "on_actionQuit_triggered()\0"
    "on_lstInputBtn_clicked()\0"
    "on_yourOutBtn_clicked()\0on_corrOutBtn_clicked()\0"
    "on_compileOutputBtn_clicked()\0"
    "on_resetBtn_clicked()\0on_quitBtn_clicked()\0"
    "arg1\0on_yourCodeLangCbox_currentIndexChanged(QString)\0"
    "on_corrCodeLangCbox_currentIndexChanged(QString)\0"
    "on_tstMakerLangCbox_currentIndexChanged(QString)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_yourCodeBtn_clicked(); break;
        case 1: _t->on_corrCodeBtn_clicked(); break;
        case 2: _t->on_tstMakerBtn_clicked(); break;
        case 3: _t->on_judgeBtn_clicked(); break;
        case 4: _t->on_actionReset_triggered(); break;
        case 5: _t->on_actionQuit_triggered(); break;
        case 6: _t->on_lstInputBtn_clicked(); break;
        case 7: _t->on_yourOutBtn_clicked(); break;
        case 8: _t->on_corrOutBtn_clicked(); break;
        case 9: _t->on_compileOutputBtn_clicked(); break;
        case 10: _t->on_resetBtn_clicked(); break;
        case 11: _t->on_quitBtn_clicked(); break;
        case 12: _t->on_yourCodeLangCbox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_corrCodeLangCbox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_tstMakerLangCbox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
