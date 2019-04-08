#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "pnumber.h"
#include "converter.h"
#include "history.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int charToInt(char c);

private slots:

    void checkLineEditFrom();

    void on_pB_1_clicked();

    void on_pB_2_clicked();

    void on_pB_3_clicked();

    void on_pB_4_clicked();

    void on_pB_5_clicked();

    void on_pB_6_clicked();

    void on_pB_7_clicked();

    void on_pB_8_clicked();

    void on_pB_9_clicked();

    void on_pB_0_clicked();

    void on_pB_A_clicked();

    void on_pB_B_clicked();

    void on_pB_C_clicked();

    void on_pB_D_clicked();

    void on_pB_E_clicked();

    void on_pB_F_clicked();

    void on_pB_BS_clicked();

    void on_pB_CE_clicked();

    void on_pB_Exec_clicked();

    void on_pB_dot_clicked();

    void on_About_triggered();

    void on_spinBoxBase_valueChanged(int arg1);

    void on_lineEditFrom_textEdited(const QString &arg1);

    void on_History_triggered();

private:
    Ui::MainWindow *ui;
    QPushButton* pbNum[16];
    Converter conv;
    History hist;
    const int numButtons = 16;
    const int cSmallA = 'a';
    const int cSmallF = 'f';
    const char token = ',';

};

#endif // MAINWINDOW_H
