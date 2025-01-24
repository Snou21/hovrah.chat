/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QFrame *line_3;
    QPushButton *pushButton;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_3;
    QListWidget *listWidget;
    QGridLayout *gridLayout;
    QLineEdit *ip_line;
    QLabel *label_5;
    QLineEdit *lasname_line;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *name_line;
    QLabel *label;
    QGridLayout *gridLayout_5;
    QPushButton *smileButton_15;
    QPushButton *smileButton_4;
    QPushButton *smileButton_2;
    QPushButton *smileButton_8;
    QPushButton *smileButton_1;
    QPushButton *smileButton_10;
    QPushButton *smileButton_11;
    QPushButton *smileButton_7;
    QPushButton *smileButton_13;
    QPushButton *smileButton_6;
    QPushButton *smileButton_9;
    QPushButton *smileButton_0;
    QPushButton *smileButton_3;
    QPushButton *smileButton_12;
    QPushButton *smileButton_14;
    QLabel *label_3;
    QFrame *line_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QFrame *line;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QListWidget *msg_list;
    QFrame *line_4;
    QLabel *image;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(745, 501);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/groundhog-day.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(178, 229, 237, 255), stop:0.50463 rgba(255, 255, 255, 255), stop:1 rgba(143, 240, 164, 255))"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 1, 0, 1, 4);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 206, 238, 1); \n"
"border-bottom: 4px solid rgba(0, 150, 174, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 222, 255, 1);\n"
"border-bottom: 4px solid rgba(0, 206, 238,  1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 206, 238, 1);\n"
"border-bottom: 0px solid rgba(0, 206, 238, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:disabled{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 206, 238, 1);\n"
""
                        "border-bottom: 0px solid rgba(0, 206, 238, 1);\n"
"color: rgba(0, 222, 255, 1);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        gridLayout_4->addWidget(pushButton, 0, 0, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 206, 238, 1); \n"
"border-bottom: 4px solid rgba(0, 150, 174, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 222, 255, 1);\n"
"border-bottom: 4px solid rgba(0, 206, 238,  1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 206, 238, 1);\n"
"border-bottom: 0px solid rgba(0, 206, 238, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:disabled{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 206, 238, 1);\n"
""
                        "border-bottom: 0px solid rgba(0, 206, 238, 1);\n"
"color: rgba(0, 222, 255, 1);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        gridLayout_3->addWidget(pushButton_3, 1, 3, 1, 1);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font1;
        font1.setPointSize(15);
        listWidget->setFont(font1);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: white"));

        gridLayout_3->addWidget(listWidget, 2, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ip_line = new QLineEdit(centralwidget);
        ip_line->setObjectName(QString::fromUtf8("ip_line"));
        ip_line->setStyleSheet(QString::fromUtf8("background-color: white"));

        gridLayout->addWidget(ip_line, 3, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)\n"
""));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 11, 0, 1, 2);

        lasname_line = new QLineEdit(centralwidget);
        lasname_line->setObjectName(QString::fromUtf8("lasname_line"));
        lasname_line->setStyleSheet(QString::fromUtf8("background-color: white"));

        gridLayout->addWidget(lasname_line, 2, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)\n"
""));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)\n"
""));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        name_line = new QLineEdit(centralwidget);
        name_line->setObjectName(QString::fromUtf8("name_line"));
        name_line->setStyleSheet(QString::fromUtf8("background-color: white"));

        gridLayout->addWidget(name_line, 1, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)\n"
""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        smileButton_15 = new QPushButton(centralwidget);
        smileButton_15->setObjectName(QString::fromUtf8("smileButton_15"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Noto Color Emoji"));
        font2.setPointSize(24);
        font2.setBold(false);
        smileButton_15->setFont(font2);
        smileButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_15, 1, 2, 1, 1);

        smileButton_4 = new QPushButton(centralwidget);
        smileButton_4->setObjectName(QString::fromUtf8("smileButton_4"));
        smileButton_4->setFont(font2);
        smileButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_4, 1, 1, 1, 1);

        smileButton_2 = new QPushButton(centralwidget);
        smileButton_2->setObjectName(QString::fromUtf8("smileButton_2"));
        smileButton_2->setFont(font2);
        smileButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_2, 0, 2, 1, 1);

        smileButton_8 = new QPushButton(centralwidget);
        smileButton_8->setObjectName(QString::fromUtf8("smileButton_8"));
        smileButton_8->setFont(font2);
        smileButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_8, 2, 2, 1, 1);

        smileButton_1 = new QPushButton(centralwidget);
        smileButton_1->setObjectName(QString::fromUtf8("smileButton_1"));
        smileButton_1->setFont(font2);
        smileButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_1, 0, 1, 1, 1);

        smileButton_10 = new QPushButton(centralwidget);
        smileButton_10->setObjectName(QString::fromUtf8("smileButton_10"));
        smileButton_10->setFont(font2);
        smileButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_10, 1, 3, 1, 1);

        smileButton_11 = new QPushButton(centralwidget);
        smileButton_11->setObjectName(QString::fromUtf8("smileButton_11"));
        smileButton_11->setFont(font2);
        smileButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_11, 2, 3, 1, 1);

        smileButton_7 = new QPushButton(centralwidget);
        smileButton_7->setObjectName(QString::fromUtf8("smileButton_7"));
        smileButton_7->setFont(font2);
        smileButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_7, 2, 1, 1, 1);

        smileButton_13 = new QPushButton(centralwidget);
        smileButton_13->setObjectName(QString::fromUtf8("smileButton_13"));
        smileButton_13->setFont(font2);
        smileButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_13, 1, 4, 1, 1);

        smileButton_6 = new QPushButton(centralwidget);
        smileButton_6->setObjectName(QString::fromUtf8("smileButton_6"));
        smileButton_6->setFont(font2);
        smileButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_6, 2, 0, 1, 1);

        smileButton_9 = new QPushButton(centralwidget);
        smileButton_9->setObjectName(QString::fromUtf8("smileButton_9"));
        smileButton_9->setFont(font2);
        smileButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_9, 0, 3, 1, 1);

        smileButton_0 = new QPushButton(centralwidget);
        smileButton_0->setObjectName(QString::fromUtf8("smileButton_0"));
        smileButton_0->setFont(font2);
        smileButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_0, 0, 0, 1, 1);

        smileButton_3 = new QPushButton(centralwidget);
        smileButton_3->setObjectName(QString::fromUtf8("smileButton_3"));
        smileButton_3->setFont(font2);
        smileButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_3, 1, 0, 1, 1);

        smileButton_12 = new QPushButton(centralwidget);
        smileButton_12->setObjectName(QString::fromUtf8("smileButton_12"));
        smileButton_12->setFont(font2);
        smileButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_12, 0, 4, 1, 1);

        smileButton_14 = new QPushButton(centralwidget);
        smileButton_14->setObjectName(QString::fromUtf8("smileButton_14"));
        smileButton_14->setFont(font2);
        smileButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* \320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"	padding: 0px 0px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_5->addWidget(smileButton_14, 2, 4, 1, 1);


        gridLayout->addLayout(gridLayout_5, 15, 0, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)\n"
""));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 7, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 3, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)\n"
""));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_6, 0, 3, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 1, 1, 2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 206, 238, 1); \n"
"border-bottom: 4px solid rgba(0, 150, 174, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 222, 255, 1);\n"
"border-bottom: 4px solid rgba(0, 206, 238,  1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 206, 238, 1);\n"
"border-bottom: 0px solid rgba(0, 206, 238, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:disabled{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(0, 206, 238, 1);\n"
""
                        "border-bottom: 0px solid rgba(0, 206, 238, 1);\n"
"color: rgba(0, 222, 255, 1);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        gridLayout_2->addWidget(pushButton_2, 3, 2, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 0, 4, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: white"));

        gridLayout_2->addWidget(lineEdit, 3, 1, 1, 1);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setAutoFillBackground(false);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: white"));

        gridLayout_2->addWidget(textBrowser, 1, 1, 1, 2);

        msg_list = new QListWidget(centralwidget);
        msg_list->setObjectName(QString::fromUtf8("msg_list"));

        gridLayout_2->addWidget(msg_list, 2, 1, 1, 2);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 3, 1);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 0, 2, 3, 1);


        gridLayout_4->addLayout(gridLayout_3, 3, 0, 1, 4);

        image = new QLabel(centralwidget);
        image->setObjectName(QString::fromUtf8("image"));
        QFont font3;
        font3.setStyleStrategy(QFont::PreferAntialias);
        image->setFont(font3);
        image->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0)\n"
""));
        image->setTextFormat(Qt::PlainText);
        image->setPixmap(QPixmap(QString::fromUtf8("build/Desktop-Debug/groundhog-day.png")));
        image->setScaledContents(true);

        gridLayout_4->addWidget(image, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 745, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hovrah.Chat", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Connect to server", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Reply to user \360\237\224\201", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Emoji \360\237\230\215", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Server IP address*:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Last name:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "User Info \360\237\223\235", nullptr));
        smileButton_15->setText(QCoreApplication::translate("MainWindow", "\360\237\221\215", nullptr));
        smileButton_4->setText(QCoreApplication::translate("MainWindow", "\360\237\244\224", nullptr));
        smileButton_2->setText(QCoreApplication::translate("MainWindow", "\360\237\230\215", nullptr));
        smileButton_8->setText(QCoreApplication::translate("MainWindow", "\360\237\230\216", nullptr));
        smileButton_1->setText(QCoreApplication::translate("MainWindow", "\360\237\230\202", nullptr));
        smileButton_10->setText(QCoreApplication::translate("MainWindow", "\360\237\221\216", nullptr));
        smileButton_11->setText(QCoreApplication::translate("MainWindow", "\360\237\230\261", nullptr));
        smileButton_7->setText(QCoreApplication::translate("MainWindow", "\360\237\230\241", nullptr));
        smileButton_13->setText(QCoreApplication::translate("MainWindow", "\360\237\244\242", nullptr));
        smileButton_6->setText(QCoreApplication::translate("MainWindow", "\360\237\222\251", nullptr));
        smileButton_9->setText(QCoreApplication::translate("MainWindow", "\360\237\230\210", nullptr));
        smileButton_0->setText(QCoreApplication::translate("MainWindow", "\360\237\230\203", nullptr));
        smileButton_3->setText(QCoreApplication::translate("MainWindow", "\360\237\230\255", nullptr));
        smileButton_12->setText(QCoreApplication::translate("MainWindow", "\360\237\222\200", nullptr));
        smileButton_14->setText(QCoreApplication::translate("MainWindow", "\360\237\246\253", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Name*:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Users \360\237\221\245", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Chat \360\237\222\254", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Send \342\236\241\357\270\217", nullptr));
        lineEdit->setText(QString());
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
