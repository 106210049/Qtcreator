#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnExit,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::on_btn_clicked()
//{
//    // hien thi dong chu hello word ra lable
//    ui->lblDisplay->setText("Hello world");
//}

