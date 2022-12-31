#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<math.h>
#include<QMessageBox>
#include<QPalette>
#include<QCloseEvent>
#include<QSpinBox>
#include<QLineEdit>
#include<QCheckBox>
#include<QComboBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("Caculator"));
    QPalette sample_palette;
    sample_palette.setColor(QPalette::Window, Qt::yellow);
    sample_palette.setColor(QPalette::WindowText, Qt::blue);
    sample_palette.setColor(QPalette::Button, Qt::yellow);

    ui->ResultLable->setAutoFillBackground(true);
    ui->ResultLable->setPalette(sample_palette);

    ui->label->setAutoFillBackground(true);
    ui->label->setPalette(sample_palette);

    ui->label_2->setAutoFillBackground(true);
    ui->label_2->setPalette(sample_palette);

    ui->SumButton->setAutoFillBackground(true);
    ui->SumButton->setPalette(sample_palette);

    ui->DivisionButton->setAutoFillBackground(true);
    ui->DivisionButton->setBackgroundRole(QPalette::Button);
    ui->DivisionButton->setPalette(sample_palette);

    ui->pushButton->setAutoFillBackground(true);
    ui->pushButton->setBackgroundRole(QPalette::Button);
    ui->pushButton->setPalette(sample_palette);

    ui->pushButton_2->setAutoFillBackground(true);
    ui->pushButton_2->setBackgroundRole(QPalette::Button);
    ui->pushButton_2->setPalette(sample_palette);

    ui->MultiplicationButton->setAutoFillBackground(true);
    ui->MultiplicationButton->setBackgroundRole(QPalette::Button);
    ui->MultiplicationButton->setPalette(sample_palette);

    ui->SubtractionButton->setAutoFillBackground(true);
    ui->SubtractionButton->setBackgroundRole(QPalette::Button);
    ui->SubtractionButton->setPalette(sample_palette);

    ui->exitButton->setAutoFillBackground(true);
    ui->exitButton->setBackgroundRole(QPalette::Button);
    ui->exitButton->setPalette(sample_palette);


}

double Ans;
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{

        if(QMessageBox::question(this,"confirm","Do you want to exit ?")==QMessageBox::No)
        {
            event->ignore();
        }
}

void MainWindow::on_SumButton_clicked()
{
    double a,b,sum;
    a=ui->Line1->text().toDouble();
    b=ui->Line2->text().toDouble();
    if(a==0)
    {
        a=Ans;
    }
    sum=a+b;
    Ans=sum;
    ui->ResultLable->setText(QString("%1+%2 = %3").arg(a).arg(b).arg(sum));
}


void MainWindow::on_SubtractionButton_clicked()
{
    double a,b,subtraction;
    a=ui->Line1->text().toDouble();
    b=ui->Line2->text().toDouble();
    if(a==0)
    {
        a=Ans;
    }
    subtraction=a-b;
    Ans=subtraction;
    ui->ResultLable->setText(QString(" %1-%2 = %3").arg(a).arg(b).arg(subtraction));
}


void MainWindow::on_MultiplicationButton_clicked()
{
    double a,b,multiplication;
    a=ui->Line1->text().toDouble();
    b=ui->Line2->text().toDouble();
    if(a==0)
    {
        a=Ans;
    }
    multiplication=a*b;
    Ans=multiplication;
    ui->ResultLable->setText(QString(" %1*%2 = %3").arg(a).arg(b).arg(multiplication));
}


void MainWindow::on_DivisionButton_clicked()
{
    double a,b,division;
    a=ui->Line1->text().toDouble();
    b=ui->Line2->text().toDouble();
    if(a==0)
    {
        a=Ans;
    }
    division=a/b;
    Ans=division;
    ui->ResultLable->setText(QString(" %1/%2= %3").arg(a).arg(b).arg(division));
}


void MainWindow::on_pushButton_clicked() // lũy thừa
{
    double a,result,b;
    a=ui->Line1->text().toDouble();
    b=ui->Line2->text().toDouble();
    if(a==0)
    {
        a=Ans;
    }
    result=pow(a,b);
    Ans=result;
    ui->ResultLable->setText(QString("%1 ^ %2 = %3").arg(a).arg(b).arg(result));

}


void MainWindow::on_pushButton_2_clicked() // căn bậc 2
{
    double a,result;
    a=ui->Line1->text().toDouble();
    if(a==0)
    {
        a=Ans;
    }
    result=sqrt(a);
    Ans=result;
    ui->ResultLable->setText(QString("%1^1/2 = %2").arg(a).arg(result));

}


void MainWindow::on_exitButton_clicked()
{

    if(QMessageBox::question(this,"Question","Do you want to exit ?",QMessageBox::Ok | QMessageBox::Cancel)==QMessageBox::Ok)
    {
        this->setWindowTitle(QString("Closing"));
        this->close();
    }
}

void MainWindow::on_log_button_clicked()
{
    double x,result;
    x=ui->x_LineEdit->text().toDouble();
    if(x==0)
    {
        x=Ans;
    }
    result=log(x);
    Ans=result;
    ui->ResultLable->setText(QString("log(%1)= %2").arg(x).arg(result));
}


void MainWindow::on_exp_button_clicked()
{
    double x,result;
    x=ui->x_LineEdit->text().toDouble();
    if(x==0)
    {
        x=Ans;
    }
    result=exp(x);
    Ans=result;
    ui->ResultLable->setText(QString("e^%1 là: %2").arg(x).arg(result));
}


void MainWindow::on_pushButton_5_clicked()
{
    double x,result;
    x=ui->x_LineEdit->text().toDouble();
    if(x==0)
    {
        x=Ans;
    }
    result=fabs(x);
    ui->ResultLable->setText(QString("|%1| = %2").arg(x).arg(result));
}



void MainWindow::on_canbaca_button_clicked()
{
    double x,a,b,result;
    a=ui->Line1->text().toDouble();
    b=ui->Line2->text().toDouble();
    x=ui->x_LineEdit->text().toDouble();
    if(x==0)
    {
        x=Ans;
        a=Ans;
    }
    result=pow(x,a/b);
    Ans=result;
    ui->ResultLable->setText(QString("%1^%2/%3= %4").arg(x).arg(a).arg(b).arg(result));

}


void MainWindow::on_Sin_button_clicked()
{
    double result,x;
    x=ui->x_LineEdit->text().toDouble();

    x=x*3.14159265358979/180;
    result=sin(x);
    Ans=result;
    ui->ResultLable->setText(QString("sin(%1)= %2").arg(x).arg(result));
}


void MainWindow::on_Cos_button_clicked()
{
    double result,x;
    x=ui->x_LineEdit->text().toDouble();

    x=x*3.14159265358979/180;
    result=cos(x);
    Ans=result;
    ui->ResultLable->setText(QString("cos(%1)= %2").arg(x).arg(result));
}


void MainWindow::on_Tan_button_clicked()
{
        double result,x;
        x=ui->x_LineEdit->text().toDouble();
        if(x==0)
        {
            x=Ans;
        }
        x=x*3.14159265358979/180;
        result=tan(x);
        Ans=result;
        ui->ResultLable->setText(QString("tan(%1)= %2").arg(x).arg(result));
}


void MainWindow::on_aSin_button_clicked()
{
        double result,x;
        x=ui->x_LineEdit->text().toDouble();
        if(abs(x)>1)
        {
            QMessageBox::critical(this,"Error !","Wrong value of x, please enter x again");
        }

        else{
            result=asin(x);
            Ans=result;
            ui->ResultLable->setText(QString("arcSin(%1)= %2 (radian)").arg(x).arg(result));
        }
}


void MainWindow::on_pushButton_3_clicked()
{
    double result,x;
    x=ui->x_LineEdit->text().toDouble();
    if(abs(x)>1)
    {
        QMessageBox::critical(this,"Error !","Wrong value of x, please enter x again");
    }
    else{
        result=acos(x);
        Ans=result;
        ui->ResultLable->setText(QString("arcCos(%1)= %2 (radian)").arg(x).arg(result));
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    double result,x;
    x=ui->x_LineEdit->text().toDouble();
    if(abs(x)>1)
    {
        QMessageBox::critical(this,"Error !","Wrong value of x, please enter x again");
    }
    else{
        result=atan(x);
        Ans=result;
        ui->ResultLable->setText(QString("arcTan(%1)= %2 (radian)").arg(x).arg(result));
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->ResultLable->setText(QString("Ans = %1").arg(Ans));
}


void MainWindow::on_pushButton_11_clicked()
{
    double x,radian;
    x=ui->x_LineEdit->text().toDouble();
    radian=x*3.14159265358979/180;
    ui->ResultLable->setText(QString("%1 (độ)= %2 (radian)").arg(x).arg(radian));
}


void MainWindow::on_Phuong_trinh_bac_2_clicked()
{
    double a,b,c;
    double x1,x2;
    a=ui->Line1->text().toDouble();
    b=ui->Line2->text().toDouble();
    c=ui->x_LineEdit->text().toDouble();
    if(a==0){
        x1=-c/b;
    }
    else{
        double denta=pow(b,2)-4*a*c;
        if(denta<0){
            ui->ResultLable->setText(QString("Phuong trinh vo nghiem !!!"));
        }
        else if(denta==0){
            x1=x2=(-b/2*a);
        }
        else{
            x1=(-b+sqrt(denta))/(2*a);
            x2=(-b-sqrt(denta))/(2*a);
        }
    }
    ui->ResultLable->setText(QString("x1= %1; x2= %2").arg(x1).arg(x2));
}

