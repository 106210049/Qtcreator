/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *verticalWidget;
    QPushButton *Log_in_Button;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *username;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *password;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *time_lable;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *ShutDown_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(602, 700);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background: rgba(32, 80, 96, 100);\n"
" background-image: url(C:\\Users\\Hi\\Downloads\\background.jpg);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 110, 581, 181));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(300, 150));
        label_2->setMaximumSize(QSize(150, 150));
        label_2->setStyleSheet(QString::fromUtf8("border: 3px solid;\n"
"background-color: rgb(255, 255, 255);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Hi/Downloads/Apple-Logo-PNG-Photos.png")));
        label_2->setScaledContents(true);

        horizontalLayout_2->addWidget(label_2);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 330, 581, 291));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalWidget = new QWidget(horizontalLayoutWidget_2);
        verticalWidget->setObjectName("verticalWidget");
        sizePolicy.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy);
        verticalWidget->setMaximumSize(QSize(350, 200));
        verticalWidget->setStyleSheet(QString::fromUtf8("background: rgba(0, 0, 0, 80);\n"
" border-radius: 8px;"));
        Log_in_Button = new QPushButton(verticalWidget);
        Log_in_Button->setObjectName("Log_in_Button");
        Log_in_Button->setGeometry(QRect(70, 100, 200, 30));
        Log_in_Button->setMinimumSize(QSize(200, 30));
        Log_in_Button->setMaximumSize(QSize(200, 30));
        Log_in_Button->setStyleSheet(QString::fromUtf8("color: white;\n"
" background-color: #27a9e3;\n"
" border-width: 0px;\n"
" border-radius: 3px;"));
        layoutWidget = new QWidget(verticalWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 311, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8(" color: white; \n"
"background: rgba(0, 0, 0, 80);\n"
""));
        label_3->setLineWidth(0);

        horizontalLayout_4->addWidget(label_3);

        username = new QLineEdit(layoutWidget);
        username->setObjectName("username");
        username->setStyleSheet(QString::fromUtf8(" border-radius: 3px;\n"
"background-color: white;"));

        horizontalLayout_4->addWidget(username);

        layoutWidget1 = new QWidget(verticalWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 60, 311, 24));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8(" color: white; \n"
"background: rgba(0, 0, 0, 80);\n"
""));

        horizontalLayout_6->addWidget(label_4);

        password = new QLineEdit(layoutWidget1);
        password->setObjectName("password");
        password->setStyleSheet(QString::fromUtf8(" border-radius: 3px;\n"
"background-color: white;"));

        horizontalLayout_6->addWidget(password);


        horizontalLayout_3->addWidget(verticalWidget);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 581, 71));
        widget->setStyleSheet(QString::fromUtf8("background-color: \n"
" qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, \n"
" stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96, \n"
" 100));"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        time_lable = new QLabel(widget);
        time_lable->setObjectName("time_lable");
        time_lable->setStyleSheet(QString::fromUtf8("background-color: \n"
" qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, \n"
" stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96, \n"
" 100));"));

        horizontalLayout->addWidget(time_lable);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(55, 55));
        pushButton->setMaximumSize(QSize(55, 55));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #27a9e3;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Hi/Downloads/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 50));
        pushButton->setCheckable(true);
        pushButton->setChecked(true);

        horizontalLayout->addWidget(pushButton);

        ShutDown_button = new QPushButton(widget);
        ShutDown_button->setObjectName("ShutDown_button");
        ShutDown_button->setMinimumSize(QSize(55, 55));
        ShutDown_button->setMaximumSize(QSize(55, 55));
        ShutDown_button->setStyleSheet(QString::fromUtf8(" background-color: #66c011;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("C:/Users/Hi/Downloads/shutdown.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShutDown_button->setIcon(icon1);
        ShutDown_button->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(ShutDown_button);

        time_lable->raise();
        pushButton->raise();
        ShutDown_button->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 602, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QString());
        Log_in_Button->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "USERNAME:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "PASSWORD:", nullptr));
        time_lable->setText(QCoreApplication::translate("MainWindow", "Sunday, 1-8-2023, 12:29 PM", nullptr));
        pushButton->setText(QString());
        ShutDown_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
