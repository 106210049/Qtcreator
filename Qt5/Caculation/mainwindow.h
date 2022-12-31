#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QCloseEvent>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    virtual void closeEvent(QCloseEvent *event);
private slots:
    void on_SumButton_clicked();

    void on_SubtractionButton_clicked();

    void on_MultiplicationButton_clicked();

    void on_DivisionButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_exitButton_clicked();

    void on_log_button_clicked();

    void on_exp_button_clicked();

    void on_pushButton_5_clicked();

    void on_canbaca_button_clicked();

    void on_Sin_button_clicked();

    void on_Cos_button_clicked();

    void on_Tan_button_clicked();

    void on_aSin_button_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_7_clicked();

    void on_Phuong_trinh_bac_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
