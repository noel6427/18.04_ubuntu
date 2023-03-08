/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/launchgui/include/launchgui/main_window.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_launchgui__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      56,   50,   22,   22, 0x0a,
      94,   88,   22,   22, 0x0a,
     140,   22,   22,   22, 0x0a,
     160,   22,   22,   22, 0x0a,
     167,   22,   22,   22, 0x0a,
     173,   22,   22,   22, 0x0a,
     180,   22,   22,   22, 0x0a,
     187,   22,   22,   22, 0x0a,
     195,   22,   22,   22, 0x0a,
     200,   22,   22,   22, 0x0a,
     206,   22,   22,   22, 0x0a,
     218,   22,   22,   22, 0x0a,
     229,   22,   22,   22, 0x0a,
     240,   22,   22,   22, 0x0a,
     247,   22,   22,   22, 0x0a,
     255,   22,   22,   22, 0x0a,
     266,   22,   22,   22, 0x0a,
     277,   22,   22,   22, 0x0a,
     287,   22,   22,   22, 0x0a,
     298,   22,   22,   22, 0x0a,
     309,   22,   22,   22, 0x0a,
     318,   22,   22,   22, 0x0a,
     328,   22,   22,   22, 0x0a,
     344,   22,   22,   22, 0x0a,
     359,   22,   22,   22, 0x0a,
     370,   22,   22,   22, 0x0a,
     382,   22,   22,   22, 0x0a,
     396,   22,   22,   22, 0x0a,
     413,   22,   22,   22, 0x0a,
     424,   22,   22,   22, 0x0a,
     431,   22,   22,   22, 0x0a,
     455,   22,   22,   22, 0x0a,
     475,  467,   22,   22, 0x0a,
     505,  467,   22,   22, 0x0a,
     535,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_launchgui__MainWindow[] = {
    "launchgui::MainWindow\0\0"
    "on_actionAbout_triggered()\0check\0"
    "on_button_connect_clicked(bool)\0state\0"
    "on_checkbox_use_environment_stateChanged(int)\0"
    "updateLoggingView()\0rtsp()\0GPS()\0"
    "Fast()\0Slow()\0Start()\0MD()\0JOY()\0"
    "Front_CAM()\0Gmapping()\0Map_save()\0"
    "Odom()\0Lidar()\0All_stop()\0Off_rtsp()\0"
    "Off_GPS()\0Off_Fast()\0Off_Slow()\0"
    "Off_MD()\0Off_JOY()\0Off_Front_CAM()\0"
    "Off_Gmapping()\0Off_Odom()\0Off_Lidar()\0"
    "updateState()\0updateState_sc()\0"
    "getReady()\0Html()\0controll_pc_websocket()\0"
    "Edit_html()\0checked\0NUC1_screenshot_clicked(bool)\0"
    "NUC2_screenshot_clicked(bool)\0"
    "Button_Cmd_go_clicked()\0"
};

void launchgui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
        case 1: _t->on_button_connect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkbox_use_environment_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateLoggingView(); break;
        case 4: _t->rtsp(); break;
        case 5: _t->GPS(); break;
        case 6: _t->Fast(); break;
        case 7: _t->Slow(); break;
        case 8: _t->Start(); break;
        case 9: _t->MD(); break;
        case 10: _t->JOY(); break;
        case 11: _t->Front_CAM(); break;
        case 12: _t->Gmapping(); break;
        case 13: _t->Map_save(); break;
        case 14: _t->Odom(); break;
        case 15: _t->Lidar(); break;
        case 16: _t->All_stop(); break;
        case 17: _t->Off_rtsp(); break;
        case 18: _t->Off_GPS(); break;
        case 19: _t->Off_Fast(); break;
        case 20: _t->Off_Slow(); break;
        case 21: _t->Off_MD(); break;
        case 22: _t->Off_JOY(); break;
        case 23: _t->Off_Front_CAM(); break;
        case 24: _t->Off_Gmapping(); break;
        case 25: _t->Off_Odom(); break;
        case 26: _t->Off_Lidar(); break;
        case 27: _t->updateState(); break;
        case 28: _t->updateState_sc(); break;
        case 29: _t->getReady(); break;
        case 30: _t->Html(); break;
        case 31: _t->controll_pc_websocket(); break;
        case 32: _t->Edit_html(); break;
        case 33: _t->NUC1_screenshot_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->NUC2_screenshot_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->Button_Cmd_go_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData launchgui::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject launchgui::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_launchgui__MainWindow,
      qt_meta_data_launchgui__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &launchgui::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *launchgui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *launchgui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_launchgui__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int launchgui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
