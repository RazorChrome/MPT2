#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "history.h"
#include <QString>
#include <QMessageBox>

enum{
    c0 = '0',
    c1,
    c2,
    c3,
    c4,
    c5,
    c6,
    c7,
    c8,
    c9,
    cA = 'A',
    cB,
    cC,
    cD,
    cE,
    cF,
    cDot = '.',
    cMinus = '-'
};

enum{
    A = 10,
    B,
    C,
    D,
    E,
    F,
    Dot
};

enum{
    b10 = 10,
    b11,
    b12,
    b13,
    b14,
    b15,
    b16
};

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

    void on_pB0_clicked();

    void on_pB1_clicked();

    void on_pB2_clicked();

    void on_pB3_clicked();

    void on_pB4_clicked();

    void on_pB5_clicked();

    void on_pB6_clicked();

    void on_pB7_clicked();

    void on_pB8_clicked();

    void on_pB9_clicked();

    void on_DotpushButton_clicked();

    void on_PlusMinuspushButton_clicked();

    void on_pBA_clicked();

    void on_pBB_clicked();

    void on_pBC_clicked();

    void on_pBD_clicked();

    void on_pBE_clicked();

    void on_pBF_clicked();

    void on_PluspushButton_clicked();

    void on_MinuspushButton_clicked();

    void on_MulpushButton_clicked();

    void on_DividepushButton_clicked();

    void on_BSpushButton_clicked();

    void on_CEpushButton_clicked();

    void on_CpushButton_clicked();

    void on_SqrtpushButton_clicked();

    void on_pB1divx_clicked();

    void on_ResultpushButton_clicked();

    void on_BasespinBox_valueChanged(int arg1);

    void on_Input_textEdited(const QString &arg1);

    void on_lastactions_triggered();

    void on_AboutAction_triggered();

    void on_MemStatus_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
     QPushButton* pbNum[16];
     History hist;
     const int numButtons = 16;
     const int cSmallA = 'a';
     const int cSmallF = 'f';
     const char token = ',';
};

#endif // MAINWINDOW_H
