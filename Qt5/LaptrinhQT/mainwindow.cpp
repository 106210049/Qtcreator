#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setup();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked(bool check)
{

    QMap<int,QString>map;
    int i=0;
    map.insert(1,"Hoang Bao Long");
    map.insert(2,"Ngo Viet Huy Hoang");
    map.insert(3,"Nguyen Ngoc Trung");

    QString s=map[2];
    ui->label->setText(s);
}
void MainWindow::setup()
{
    ui->pushButton->setStyleSheet("color:blue");
    ui->pushButton->setStyleSheet( "background-color: green");
}



