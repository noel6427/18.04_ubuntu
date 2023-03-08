/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QFrame *frame_8;
    QLCDNumber *lcdNumber_sec;
    QPushButton *Timer_reset;
    QLabel *label_5;
    QLCDNumber *lcdNumber_min;
    QPushButton *Timer_stop;
    QLabel *label_4;
    QLCDNumber *lcdNumber_hour;
    QPushButton *Timer_start;
    QLabel *label_6;
    QFrame *frame_3;
    QPushButton *Button_getmission;
    QLabel *get_ready;
    QPushButton *Button_Joy;
    QLabel *state_label_7;
    QPushButton *Off_Joy;
    QPushButton *Button_md;
    QLabel *state_label_6;
    QPushButton *Off_md;
    QLabel *label_8;
    QLabel *label_11;
    QLineEdit *command_lineEdit;
    QPushButton *Button_Cmd_go;
    QGroupBox *groupBox_5;
    QLabel *state_label_8;
    QLabel *state_label_9;
    QPushButton *Button_Auto_drive_Mode;
    QPushButton *Button_Remote_control_Mode;
    QFrame *frame_9;
    QGroupBox *camera;
    QPushButton *Button_Front_CAM;
    QPushButton *Off_Front_CAM;
    QPushButton *Button_rtsp;
    QPushButton *Off_rtsp;
    QFrame *frame_4;
    QGroupBox *Mission;
    QPushButton *Button_Slow;
    QPushButton *Button_Fast;
    QPushButton *Button_GPS;
    QLabel *state_label_2;
    QLabel *state_label_3;
    QLabel *state_label_4;
    QLabel *state_label_5;
    QPushButton *Off_GPS;
    QPushButton *Off_Slow;
    QPushButton *Off_Fast;
    QFrame *frame_7;
    QGroupBox *groupBox_3;
    QFrame *frame_5;
    QPushButton *Button_html;
    QPushButton *Button_controll_pc_websocket;
    QPushButton *Button_Edit_html;
    QLineEdit *mode_ready;
    QPushButton *Button_All_stop;
    QPushButton *Button_Start;
    QGroupBox *groupBox_4;
    QFrame *frame_6;
    QPushButton *Button_nuc1_screenshot;
    QPushButton *Button_nuc2_screenshot;
    QGroupBox *Slam;
    QFrame *frame_2;
    QPushButton *Button_Map_save;
    QPushButton *Button_Lidar;
    QPushButton *Button_Odom;
    QPushButton *Off_Lidar;
    QPushButton *Off_Odom;
    QPushButton *Button_Gmapping;
    QPushButton *Off_Gmapping;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;
    QDockWidget *dock_status;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *line_edit_host;
    QPushButton *button_connect;
    QLineEdit *line_edit_master;
    QLabel *label_2;
    QCheckBox *checkbox_remember_settings;
    QLineEdit *line_edit_topic;
    QLabel *label;
    QCheckBox *checkbox_use_environment;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_3;
    QListView *view_logging;
    QPushButton *quit_button;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(1858, 1013);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1459, 949));
        tab_manager = new QTabWidget(scrollAreaWidgetContents);
        tab_manager->setObjectName(QString::fromUtf8("tab_manager"));
        tab_manager->setGeometry(QRect(0, 20, 1431, 931));
        tab_manager->setMinimumSize(QSize(100, 0));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QString::fromUtf8("tab_status"));
        label_7 = new QLabel(tab_status);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 40, 891, 471));
        label_7->setFrameShape(QFrame::Box);
        label_7->setFrameShadow(QFrame::Plain);
        groupBox_2 = new QGroupBox(tab_status);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(1090, 160, 311, 131));
        frame_8 = new QFrame(groupBox_2);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(0, 0, 311, 131));
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Raised);
        lcdNumber_sec = new QLCDNumber(frame_8);
        lcdNumber_sec->setObjectName(QString::fromUtf8("lcdNumber_sec"));
        lcdNumber_sec->setGeometry(QRect(210, 50, 91, 41));
        Timer_reset = new QPushButton(frame_8);
        Timer_reset->setObjectName(QString::fromUtf8("Timer_reset"));
        Timer_reset->setGeometry(QRect(210, 100, 89, 21));
        label_5 = new QLabel(frame_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(240, 30, 61, 20));
        lcdNumber_min = new QLCDNumber(frame_8);
        lcdNumber_min->setObjectName(QString::fromUtf8("lcdNumber_min"));
        lcdNumber_min->setGeometry(QRect(110, 50, 91, 41));
        Timer_stop = new QPushButton(frame_8);
        Timer_stop->setObjectName(QString::fromUtf8("Timer_stop"));
        Timer_stop->setGeometry(QRect(110, 100, 91, 21));
        label_4 = new QLabel(frame_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 30, 31, 21));
        label_4->setTextFormat(Qt::AutoText);
        lcdNumber_hour = new QLCDNumber(frame_8);
        lcdNumber_hour->setObjectName(QString::fromUtf8("lcdNumber_hour"));
        lcdNumber_hour->setGeometry(QRect(10, 50, 91, 41));
        Timer_start = new QPushButton(frame_8);
        Timer_start->setObjectName(QString::fromUtf8("Timer_start"));
        Timer_start->setGeometry(QRect(10, 100, 91, 20));
        label_6 = new QLabel(frame_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 30, 31, 21));
        label_6->setTextFormat(Qt::AutoText);
        frame_3 = new QFrame(tab_status);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(20, 580, 311, 171));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        Button_getmission = new QPushButton(frame_3);
        Button_getmission->setObjectName(QString::fromUtf8("Button_getmission"));
        Button_getmission->setGeometry(QRect(20, 20, 111, 41));
        QFont font;
        font.setPointSize(12);
        Button_getmission->setFont(font);
        get_ready = new QLabel(frame_3);
        get_ready->setObjectName(QString::fromUtf8("get_ready"));
        get_ready->setGeometry(QRect(170, 30, 51, 20));
        get_ready->setPixmap(QPixmap(QString::fromUtf8(":/images/switch2.jpg")));
        Button_Joy = new QPushButton(frame_3);
        Button_Joy->setObjectName(QString::fromUtf8("Button_Joy"));
        Button_Joy->setGeometry(QRect(20, 70, 111, 41));
        Button_Joy->setFont(font);
        state_label_7 = new QLabel(frame_3);
        state_label_7->setObjectName(QString::fromUtf8("state_label_7"));
        state_label_7->setGeometry(QRect(180, 70, 67, 41));
        state_label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/led-off.png")));
        Off_Joy = new QPushButton(frame_3);
        Off_Joy->setObjectName(QString::fromUtf8("Off_Joy"));
        Off_Joy->setGeometry(QRect(240, 70, 51, 41));
        Button_md = new QPushButton(frame_3);
        Button_md->setObjectName(QString::fromUtf8("Button_md"));
        Button_md->setGeometry(QRect(20, 120, 111, 41));
        Button_md->setFont(font);
        state_label_6 = new QLabel(frame_3);
        state_label_6->setObjectName(QString::fromUtf8("state_label_6"));
        state_label_6->setGeometry(QRect(180, 120, 31, 41));
        state_label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/led-off.png")));
        Off_md = new QPushButton(frame_3);
        Off_md->setObjectName(QString::fromUtf8("Off_md"));
        Off_md->setGeometry(QRect(240, 120, 51, 41));
        label_8 = new QLabel(tab_status);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 10, 101, 21));
        QFont font1;
        font1.setPointSize(15);
        label_8->setFont(font1);
        label_11 = new QLabel(tab_status);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(1040, 40, 361, 111));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../resources/images/KUDOS2.png")));
        command_lineEdit = new QLineEdit(tab_status);
        command_lineEdit->setObjectName(QString::fromUtf8("command_lineEdit"));
        command_lineEdit->setGeometry(QRect(1090, 400, 151, 25));
        Button_Cmd_go = new QPushButton(tab_status);
        Button_Cmd_go->setObjectName(QString::fromUtf8("Button_Cmd_go"));
        Button_Cmd_go->setGeometry(QRect(1150, 430, 89, 25));
        groupBox_5 = new QGroupBox(tab_status);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(360, 580, 251, 101));
        state_label_8 = new QLabel(groupBox_5);
        state_label_8->setObjectName(QString::fromUtf8("state_label_8"));
        state_label_8->setGeometry(QRect(50, 30, 41, 31));
        state_label_9 = new QLabel(groupBox_5);
        state_label_9->setObjectName(QString::fromUtf8("state_label_9"));
        state_label_9->setGeometry(QRect(170, 30, 41, 31));
        Button_Auto_drive_Mode = new QPushButton(groupBox_5);
        Button_Auto_drive_Mode->setObjectName(QString::fromUtf8("Button_Auto_drive_Mode"));
        Button_Auto_drive_Mode->setGeometry(QRect(10, 70, 101, 25));
        Button_Remote_control_Mode = new QPushButton(groupBox_5);
        Button_Remote_control_Mode->setObjectName(QString::fromUtf8("Button_Remote_control_Mode"));
        Button_Remote_control_Mode->setGeometry(QRect(120, 70, 121, 25));
        frame_9 = new QFrame(groupBox_5);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(0, 0, 251, 101));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_9->raise();
        state_label_8->raise();
        state_label_9->raise();
        Button_Auto_drive_Mode->raise();
        Button_Remote_control_Mode->raise();
        camera = new QGroupBox(tab_status);
        camera->setObjectName(QString::fromUtf8("camera"));
        camera->setGeometry(QRect(20, 760, 421, 121));
        Button_Front_CAM = new QPushButton(camera);
        Button_Front_CAM->setObjectName(QString::fromUtf8("Button_Front_CAM"));
        Button_Front_CAM->setGeometry(QRect(20, 40, 101, 61));
        Off_Front_CAM = new QPushButton(camera);
        Off_Front_CAM->setObjectName(QString::fromUtf8("Off_Front_CAM"));
        Off_Front_CAM->setGeometry(QRect(140, 50, 51, 41));
        Button_rtsp = new QPushButton(camera);
        Button_rtsp->setObjectName(QString::fromUtf8("Button_rtsp"));
        Button_rtsp->setGeometry(QRect(230, 40, 101, 61));
        Button_rtsp->setFont(font);
        Off_rtsp = new QPushButton(camera);
        Off_rtsp->setObjectName(QString::fromUtf8("Off_rtsp"));
        Off_rtsp->setGeometry(QRect(350, 50, 51, 41));
        frame_4 = new QFrame(camera);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 421, 121));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_4->raise();
        Button_Front_CAM->raise();
        Off_Front_CAM->raise();
        Button_rtsp->raise();
        Off_rtsp->raise();
        Mission = new QGroupBox(tab_status);
        Mission->setObjectName(QString::fromUtf8("Mission"));
        Mission->setGeometry(QRect(470, 760, 711, 121));
        QFont font2;
        font2.setPointSize(11);
        Mission->setFont(font2);
        Mission->setFlat(false);
        Button_Slow = new QPushButton(Mission);
        Button_Slow->setObjectName(QString::fromUtf8("Button_Slow"));
        Button_Slow->setGeometry(QRect(260, 40, 91, 61));
        Button_Slow->setFont(font);
        Button_Fast = new QPushButton(Mission);
        Button_Fast->setObjectName(QString::fromUtf8("Button_Fast"));
        Button_Fast->setGeometry(QRect(490, 40, 91, 61));
        Button_Fast->setFont(font);
        Button_GPS = new QPushButton(Mission);
        Button_GPS->setObjectName(QString::fromUtf8("Button_GPS"));
        Button_GPS->setGeometry(QRect(20, 40, 101, 61));
        Button_GPS->setFont(font);
        state_label_2 = new QLabel(Mission);
        state_label_2->setObjectName(QString::fromUtf8("state_label_2"));
        state_label_2->setGeometry(QRect(140, 50, 31, 41));
        state_label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/led-off.png")));
        state_label_3 = new QLabel(Mission);
        state_label_3->setObjectName(QString::fromUtf8("state_label_3"));
        state_label_3->setGeometry(QRect(120, 180, 31, 41));
        state_label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/led-off.png")));
        state_label_4 = new QLabel(Mission);
        state_label_4->setObjectName(QString::fromUtf8("state_label_4"));
        state_label_4->setGeometry(QRect(600, 50, 31, 41));
        state_label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/led-off.png")));
        state_label_5 = new QLabel(Mission);
        state_label_5->setObjectName(QString::fromUtf8("state_label_5"));
        state_label_5->setGeometry(QRect(370, 50, 31, 41));
        state_label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/led-off.png")));
        Off_GPS = new QPushButton(Mission);
        Off_GPS->setObjectName(QString::fromUtf8("Off_GPS"));
        Off_GPS->setGeometry(QRect(180, 50, 51, 41));
        Off_Slow = new QPushButton(Mission);
        Off_Slow->setObjectName(QString::fromUtf8("Off_Slow"));
        Off_Slow->setGeometry(QRect(410, 50, 51, 41));
        Off_Fast = new QPushButton(Mission);
        Off_Fast->setObjectName(QString::fromUtf8("Off_Fast"));
        Off_Fast->setGeometry(QRect(640, 50, 51, 41));
        frame_7 = new QFrame(Mission);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(0, 0, 711, 121));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_7->raise();
        Button_Slow->raise();
        Button_Fast->raise();
        Button_GPS->raise();
        state_label_2->raise();
        state_label_3->raise();
        state_label_4->raise();
        state_label_5->raise();
        Off_GPS->raise();
        Off_Slow->raise();
        Off_Fast->raise();
        groupBox_3 = new QGroupBox(tab_status);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(1090, 300, 311, 81));
        frame_5 = new QFrame(groupBox_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 311, 81));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Raised);
        Button_html = new QPushButton(frame_5);
        Button_html->setObjectName(QString::fromUtf8("Button_html"));
        Button_html->setGeometry(QRect(10, 30, 81, 41));
        QFont font3;
        font3.setPointSize(16);
        Button_html->setFont(font3);
        Button_controll_pc_websocket = new QPushButton(frame_5);
        Button_controll_pc_websocket->setObjectName(QString::fromUtf8("Button_controll_pc_websocket"));
        Button_controll_pc_websocket->setGeometry(QRect(110, 30, 111, 41));
        QFont font4;
        font4.setPointSize(13);
        Button_controll_pc_websocket->setFont(font4);
        Button_Edit_html = new QPushButton(frame_5);
        Button_Edit_html->setObjectName(QString::fromUtf8("Button_Edit_html"));
        Button_Edit_html->setGeometry(QRect(240, 30, 61, 41));
        mode_ready = new QLineEdit(tab_status);
        mode_ready->setObjectName(QString::fromUtf8("mode_ready"));
        mode_ready->setGeometry(QRect(360, 720, 131, 31));
        Button_All_stop = new QPushButton(tab_status);
        Button_All_stop->setObjectName(QString::fromUtf8("Button_All_stop"));
        Button_All_stop->setGeometry(QRect(500, 720, 51, 31));
        Button_Start = new QPushButton(tab_status);
        Button_Start->setObjectName(QString::fromUtf8("Button_Start"));
        Button_Start->setGeometry(QRect(560, 720, 51, 31));
        groupBox_4 = new QGroupBox(tab_status);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(1250, 390, 151, 71));
        frame_6 = new QFrame(groupBox_4);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(0, 0, 151, 71));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        Button_nuc1_screenshot = new QPushButton(frame_6);
        Button_nuc1_screenshot->setObjectName(QString::fromUtf8("Button_nuc1_screenshot"));
        Button_nuc1_screenshot->setGeometry(QRect(10, 30, 61, 31));
        QFont font5;
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        font5.setStrikeOut(false);
        font5.setKerning(true);
        font5.setStyleStrategy(QFont::PreferDefault);
        Button_nuc1_screenshot->setFont(font5);
        Button_nuc1_screenshot->setCheckable(true);
        Button_nuc2_screenshot = new QPushButton(frame_6);
        Button_nuc2_screenshot->setObjectName(QString::fromUtf8("Button_nuc2_screenshot"));
        Button_nuc2_screenshot->setGeometry(QRect(80, 30, 61, 31));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        Button_nuc2_screenshot->setFont(font6);
        Button_nuc2_screenshot->setCheckable(true);
        Slam = new QGroupBox(tab_status);
        Slam->setObjectName(QString::fromUtf8("Slam"));
        Slam->setGeometry(QRect(640, 580, 331, 171));
        frame_2 = new QFrame(Slam);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 331, 171));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        Button_Map_save = new QPushButton(frame_2);
        Button_Map_save->setObjectName(QString::fromUtf8("Button_Map_save"));
        Button_Map_save->setGeometry(QRect(210, 80, 111, 31));
        Button_Lidar = new QPushButton(frame_2);
        Button_Lidar->setObjectName(QString::fromUtf8("Button_Lidar"));
        Button_Lidar->setGeometry(QRect(20, 30, 111, 31));
        Button_Odom = new QPushButton(frame_2);
        Button_Odom->setObjectName(QString::fromUtf8("Button_Odom"));
        Button_Odom->setGeometry(QRect(20, 80, 111, 31));
        Off_Lidar = new QPushButton(frame_2);
        Off_Lidar->setObjectName(QString::fromUtf8("Off_Lidar"));
        Off_Lidar->setGeometry(QRect(140, 30, 51, 31));
        Off_Odom = new QPushButton(frame_2);
        Off_Odom->setObjectName(QString::fromUtf8("Off_Odom"));
        Off_Odom->setGeometry(QRect(140, 80, 51, 31));
        Button_Gmapping = new QPushButton(frame_2);
        Button_Gmapping->setObjectName(QString::fromUtf8("Button_Gmapping"));
        Button_Gmapping->setGeometry(QRect(20, 130, 111, 31));
        Off_Gmapping = new QPushButton(frame_2);
        Off_Gmapping->setObjectName(QString::fromUtf8("Off_Gmapping"));
        Off_Gmapping->setGeometry(QRect(140, 130, 51, 31));
        tab_manager->addTab(tab_status, QString());
        groupBox_5->raise();
        frame_3->raise();
        label_7->raise();
        groupBox_2->raise();
        label_8->raise();
        label_11->raise();
        command_lineEdit->raise();
        Button_Cmd_go->raise();
        camera->raise();
        Mission->raise();
        groupBox_3->raise();
        mode_ready->raise();
        Button_All_stop->raise();
        Button_Start->raise();
        groupBox_4->raise();
        Slam->raise();
        scrollArea->setWidget(scrollAreaWidgetContents);

        hboxLayout->addWidget(scrollArea);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1858, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);
        dock_status = new QDockWidget(MainWindowDesign);
        dock_status->setObjectName(QString::fromUtf8("dock_status"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dock_status->sizePolicy().hasHeightForWidth());
        dock_status->setSizePolicy(sizePolicy);
        dock_status->setMinimumSize(QSize(318, 503));
        dock_status->setFloating(true);
        dock_status->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(dockWidgetContents_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QString::fromUtf8("line_edit_host"));

        gridLayout->addWidget(line_edit_host, 3, 0, 1, 2);

        button_connect = new QPushButton(groupBox);
        button_connect->setObjectName(QString::fromUtf8("button_connect"));
        button_connect->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_connect, 8, 1, 1, 1);

        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QString::fromUtf8("line_edit_master"));

        gridLayout->addWidget(line_edit_master, 1, 0, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QString::fromUtf8("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_remember_settings, 7, 0, 1, 2);

        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QString::fromUtf8("line_edit_topic"));
        line_edit_topic->setEnabled(false);

        gridLayout->addWidget(line_edit_topic, 5, 0, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QString::fromUtf8("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_use_environment, 6, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox);

        groupBox_12 = new QGroupBox(frame);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(groupBox_12);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        view_logging = new QListView(groupBox_12);
        view_logging->setObjectName(QString::fromUtf8("view_logging"));

        gridLayout_3->addWidget(view_logging, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_12);


        verticalLayout->addWidget(frame);

        quit_button = new QPushButton(dockWidgetContents_2);
        quit_button->setObjectName(QString::fromUtf8("quit_button"));
        sizePolicy1.setHeightForWidth(quit_button->sizePolicy().hasHeightForWidth());
        quit_button->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(quit_button);

        dock_status->setWidget(dockWidgetContents_2);
        MainWindowDesign->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dock_status);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));
        QObject::connect(quit_button, SIGNAL(clicked()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "Timer", 0, QApplication::UnicodeUTF8));
        Timer_reset->setText(QApplication::translate("MainWindowDesign", "Reset", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowDesign", "sec", 0, QApplication::UnicodeUTF8));
        Timer_stop->setText(QApplication::translate("MainWindowDesign", "Stop", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowDesign", "min", 0, QApplication::UnicodeUTF8));
        Timer_start->setText(QApplication::translate("MainWindowDesign", "Start", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindowDesign", "hour", 0, QApplication::UnicodeUTF8));
        Button_getmission->setText(QApplication::translate("MainWindowDesign", "Get Mission", 0, QApplication::UnicodeUTF8));
        get_ready->setText(QString());
        Button_Joy->setText(QApplication::translate("MainWindowDesign", "JoyStick", 0, QApplication::UnicodeUTF8));
        state_label_7->setText(QString());
        Off_Joy->setText(QApplication::translate("MainWindowDesign", "Off", 0, QApplication::UnicodeUTF8));
        Button_md->setText(QApplication::translate("MainWindowDesign", "md_driver", 0, QApplication::UnicodeUTF8));
        state_label_6->setText(QString());
        Off_md->setText(QApplication::translate("MainWindowDesign", "Off", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindowDesign", "Front CAM", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        Button_Cmd_go->setText(QApplication::translate("MainWindowDesign", "Cmd_go", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindowDesign", "Joy Mode", 0, QApplication::UnicodeUTF8));
        state_label_8->setText(QString());
        state_label_9->setText(QString());
        Button_Auto_drive_Mode->setText(QApplication::translate("MainWindowDesign", "Auto_drive", 0, QApplication::UnicodeUTF8));
        Button_Remote_control_Mode->setText(QApplication::translate("MainWindowDesign", "Remote_control", 0, QApplication::UnicodeUTF8));
        camera->setTitle(QApplication::translate("MainWindowDesign", "CAMERA", 0, QApplication::UnicodeUTF8));
        Button_Front_CAM->setText(QApplication::translate("MainWindowDesign", "Front CAM", 0, QApplication::UnicodeUTF8));
        Off_Front_CAM->setText(QApplication::translate("MainWindowDesign", "Off", 0, QApplication::UnicodeUTF8));
        Button_rtsp->setText(QApplication::translate("MainWindowDesign", "rtsp", 0, QApplication::UnicodeUTF8));
        Off_rtsp->setText(QApplication::translate("MainWindowDesign", "Off", 0, QApplication::UnicodeUTF8));
        Mission->setTitle(QApplication::translate("MainWindowDesign", "Mission", 0, QApplication::UnicodeUTF8));
        Button_Slow->setText(QApplication::translate("MainWindowDesign", "Slow", 0, QApplication::UnicodeUTF8));
        Button_Fast->setText(QApplication::translate("MainWindowDesign", "Fast", 0, QApplication::UnicodeUTF8));
        Button_GPS->setText(QApplication::translate("MainWindowDesign", "GPS", 0, QApplication::UnicodeUTF8));
        state_label_2->setText(QString());
        state_label_3->setText(QString());
        state_label_4->setText(QString());
        state_label_5->setText(QString());
        Off_GPS->setText(QApplication::translate("MainWindowDesign", "Off", 0, QApplication::UnicodeUTF8));
        Off_Slow->setText(QApplication::translate("MainWindowDesign", "Off", 0, QApplication::UnicodeUTF8));
        Off_Fast->setText(QApplication::translate("MainWindowDesign", "Off", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindowDesign", "COMM", 0, QApplication::UnicodeUTF8));
        Button_html->setText(QApplication::translate("MainWindowDesign", "HTML", 0, QApplication::UnicodeUTF8));
        Button_controll_pc_websocket->setText(QApplication::translate("MainWindowDesign", "Controll_pc\n"
"WebSocket", 0, QApplication::UnicodeUTF8));
        Button_Edit_html->setText(QApplication::translate("MainWindowDesign", "Edit \n"
" html", 0, QApplication::UnicodeUTF8));
        Button_All_stop->setText(QApplication::translate("MainWindowDesign", "\342\226\240", 0, QApplication::UnicodeUTF8));
        Button_Start->setText(QApplication::translate("MainWindowDesign", "\342\226\266", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindowDesign", "NUC Screenshot", 0, QApplication::UnicodeUTF8));
        Button_nuc1_screenshot->setText(QApplication::translate("MainWindowDesign", "NUC1", 0, QApplication::UnicodeUTF8));
        Button_nuc2_screenshot->setText(QApplication::translate("MainWindowDesign", "NUC2", 0, QApplication::UnicodeUTF8));
        Slam->setTitle(QApplication::translate("MainWindowDesign", "Slam", 0, QApplication::UnicodeUTF8));
        Button_Map_save->setText(QApplication::translate("MainWindowDesign", "Map_save", 0, QApplication::UnicodeUTF8));
        Button_Lidar->setText(QApplication::translate("MainWindowDesign", "Lidar", 0, QApplication::UnicodeUTF8));
        Button_Odom->setText(QApplication::translate("MainWindowDesign", "Odom", 0, QApplication::UnicodeUTF8));
        Off_Lidar->setText(QApplication::translate("MainWindowDesign", "Off", 0, QApplication::UnicodeUTF8));
        Off_Odom->setText(QApplication::translate("MainWindowDesign", "Off", 0, QApplication::UnicodeUTF8));
        Button_Gmapping->setText(QApplication::translate("MainWindowDesign", "Gmapping", 0, QApplication::UnicodeUTF8));
        Off_Gmapping->setText(QApplication::translate("MainWindowDesign", "Off", 0, QApplication::UnicodeUTF8));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "Ros Communications", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", 0, QApplication::UnicodeUTF8));
        dock_status->setWindowTitle(QApplication::translate("MainWindowDesign", "Command Panel", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "Ros Master", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", 0, QApplication::UnicodeUTF8));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "Connect", 0, QApplication::UnicodeUTF8));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowDesign", "Ros IP", 0, QApplication::UnicodeUTF8));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "Remember settings on startup", 0, QApplication::UnicodeUTF8));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "unused", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindowDesign", "Ros Master Url", 0, QApplication::UnicodeUTF8));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "Use environment variables", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("MainWindowDesign", "Logging", 0, QApplication::UnicodeUTF8));
        quit_button->setText(QApplication::translate("MainWindowDesign", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
