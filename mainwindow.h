#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double opration(double val1 , double val2);
private slots:
    void on_b0_clicked();

    void on_bdot_clicked();

    void on_bdiv_clicked();

    void on_bequl_clicked();

    void on_bplus_clicked();

    void on_b3_clicked();

    void on_b7_clicked();

    void on_b2_clicked();

    void on_b1_clicked();

    void on_bmina_clicked();

    void on_b6_clicked();

    void on_b5_clicked();

    void on_b4_clicked();

    void on_bmulti_clicked();

    void on_b9_clicked();

    void on_b8_clicked();

    void on_clear_clicked();

private:
    Ui::MainWindow *ui;
    double val1 = 0;
    double val2 = 0;
    char exp = '+';

};
#endif // MAINWINDOW_H
