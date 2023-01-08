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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton1;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QSlider *horizontalSlider;
    QComboBox *comboBox;
    QTextEdit *textEdit;
    QPushButton *pushButton1_2;
    QPushButton *pushButton1_3;
    QMenuBar *menubar;
    QMenu *menuCheck;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(779, 369);
        MainWindow->setStyleSheet(QString::fromUtf8("background: qradialgradient(cx: 0.3, cy: -0.4, fx: 0.3, \n"
" fy: -0.4, radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
" color: rgb(255, 255, 255);\n"
" border: 1px solid #ffffff;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton1 = new QPushButton(centralwidget);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setGeometry(QRect(50, 50, 93, 29));
        pushButton1->setMinimumSize(QSize(93, 0));
        pushButton1->setToolTipDuration(-1);
        pushButton1->setAutoFillBackground(false);
        pushButton1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 9pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"border: 2px solid;\n"
"border-radius: 10px;\n"
"padding: 0 8px;"));
        pushButton1->setFlat(false);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 240, 110, 24));
        radioButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
""));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 280, 91, 24));
        checkBox->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(20, 200, 221, 22));
        horizontalSlider->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 160, 111, 26));
        comboBox->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(320, 90, 441, 211));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 11pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"border: 2px solid;\n"
"border-radius: 10px;\n"
" padding: 0 8px;"));
        pushButton1_2 = new QPushButton(centralwidget);
        pushButton1_2->setObjectName("pushButton1_2");
        pushButton1_2->setGeometry(QRect(180, 50, 93, 29));
        pushButton1_2->setMinimumSize(QSize(93, 0));
        pushButton1_2->setToolTipDuration(-1);
        pushButton1_2->setAutoFillBackground(false);
        pushButton1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 9pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"border: 2px solid;\n"
"border-radius: 10px;\n"
"padding: 0 8px;"));
        pushButton1_2->setFlat(false);
        pushButton1_3 = new QPushButton(centralwidget);
        pushButton1_3->setObjectName("pushButton1_3");
        pushButton1_3->setGeometry(QRect(300, 50, 93, 29));
        pushButton1_3->setMinimumSize(QSize(93, 0));
        pushButton1_3->setToolTipDuration(-1);
        pushButton1_3->setAutoFillBackground(false);
        pushButton1_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 9pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"border: 2px solid;\n"
"border-radius: 10px;\n"
"padding: 0 8px;"));
        pushButton1_3->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);
        radioButton->raise();
        checkBox->raise();
        horizontalSlider->raise();
        comboBox->raise();
        pushButton1->raise();
        textEdit->raise();
        pushButton1_2->raise();
        pushButton1_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 779, 24));
        menuCheck = new QMenu(menubar);
        menuCheck->setObjectName("menuCheck");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCheck->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "L\341\273\261a ch\341\273\215n 1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "L\341\273\261a ch\341\273\215n 2", nullptr));

        pushButton1_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton1_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menuCheck->setTitle(QCoreApplication::translate("MainWindow", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
