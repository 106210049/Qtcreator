#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <qtabwidget.h>
#include <QAction>
#include <QCloseEvent>
#include<QMessageBox>
#include <string.h>
#include <QTime>
#include <QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    msgBox.setStyleSheet(QString::fromUtf8("background-color: rgb(241, 241, 241);"));
    this->setWindowTitle(QString("Log in"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ShutDown_button_clicked()
{

    if(QMessageBox::information(this,"Shut down","Do you want to shut down", QMessageBox::Yes|QMessageBox::No)==QMessageBox::No)
    {

    }
    else{
       close();
    }
}

void MainWindow::Current_time(QString text)
{
    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();
    text=cd.toString() + "" + ct.toString();
    ui->time_lable->setText(QString(text));
}

void MainWindow::on_Log_in_Button_clicked()
{
    static int fail_count=0;
    QString username;
    QString password;
    username=ui->username->text();
    password=ui->password->text();
    if(username!="106210049"||password!="DUT106210049!")
    {
        fail_count++;
        if(fail_count==5)
        {
            fail_count=0;
            close();
        }
        if(QMessageBox::warning(this,"Fail","Acount is not available or the password is not correct, try again",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
        {
            ui->username->clear();
            ui->password->clear();
        }
        else{
            close();
        }

    }
    else{
        if(QMessageBox::information(this,"Confirm","Log in successful", QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
        {
            ui->username->clear();
            ui->password->clear();
        }
    }
}

