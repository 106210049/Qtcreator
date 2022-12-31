#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Window Cloud");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnInformation_clicked()
{
    if(QMessageBox::information(this,"Information","Nhấn phím OK để tiếp tục", QMessageBox::Ok|QMessageBox::Close)==QMessageBox::Ok)
    {

    }
    else{
        close();
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::warning(this,"Warning", "Cảnh báo virus");
}


void MainWindow::on_pushButton_3_clicked()
{
        if(QMessageBox::critical(this,"Critical"," Error, Do you want to exit? ",QMessageBox::Ok | QMessageBox::Cancel)==QMessageBox::Ok)
        {
            this->setWindowTitle("Exit window");
            close();
        }
        else{

        }
}

void MainWindow::on_pushButton_clicked()
{
    if(QMessageBox::question(this,"Question","Do you want to exit ?",QMessageBox::Ok | QMessageBox::Cancel)==QMessageBox::Ok)
    {
        this->setWindowTitle("Exiting");
        close();
    }
    else{

    }
}

