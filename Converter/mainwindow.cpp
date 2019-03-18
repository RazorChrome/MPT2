#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <history.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pbNum[0] = ui->pB_0;
    pbNum[1] = ui->pB_1;
    pbNum[2] = ui->pB_2;
    pbNum[3] = ui->pB_3;
    pbNum[4] = ui->pB_4;
    pbNum[5] = ui->pB_5;
    pbNum[6] = ui->pB_6;
    pbNum[7] = ui->pB_7;
    pbNum[8] = ui->pB_8;
    pbNum[9] = ui->pB_9;
    pbNum[10] = ui->pB_A;
    pbNum[11] = ui->pB_B;
    pbNum[12] = ui->pB_C;
    pbNum[13] = ui->pB_D;
    pbNum[14] = ui->pB_E;
    pbNum[15] = ui->pB_F;

}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::charToInt(char c) //переделать?
{
    if((c >= 'a' && c <= 'f')){
        return c - 'a' + A;
    }
    else if(c >= 'A' && c <='F'){
        return c - 'A' + A;
    }
    else if(c >= '0' && c <='9'){
        return c - '0';
    }
    else if(c == '.') return Dot;
    else return -1;
}

void MainWindow::checkLineEditFrom() //переделать?
{
    QString txt = ui->lineEditFrom->text().toUpper();
    int i = 0, to = ui->spinBoxBase->value();
    bool Dot = false;
    while (i < txt.size()){
        int num = charToInt(txt[i].toLatin1());
        if(num >= 0 && num < to){
            ++i;
        }
        else if(num == Dot){
            if(Dot){
                txt.remove(i, 1);
            }
            else{
                Dot = true;
                ++i;
            }
        }
        else{
            txt.remove(i, 1);
        }
    }
    ui->lineEditFrom->setText(txt);
}

void MainWindow::on_pB_1_clicked()
{
   ui->lineEditFrom->setText(ui->lineEditFrom->text()+"1");
}

void MainWindow::on_pB_2_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"2");
}

void MainWindow::on_pB_3_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"3");
}

void MainWindow::on_pB_4_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"4");
}

void MainWindow::on_pB_5_clicked()
{
   ui->lineEditFrom->setText(ui->lineEditFrom->text()+"5");
}

void MainWindow::on_pB_6_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"6");
}

void MainWindow::on_pB_7_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"7");
}

void MainWindow::on_pB_8_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"8");
}

void MainWindow::on_pB_9_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"9");
}

void MainWindow::on_pB_0_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"0");
}

void MainWindow::on_pB_A_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"A");
}

void MainWindow::on_pB_B_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"B");
}

void MainWindow::on_pB_C_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"C");
}

void MainWindow::on_pB_D_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"D");
}

void MainWindow::on_pB_E_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"E");
}

void MainWindow::on_pB_F_clicked()
{
    ui->lineEditFrom->setText(ui->lineEditFrom->text()+"F");
}

void MainWindow::on_pB_dot_clicked()
{
    if(!ui->lineEditFrom->text().contains(".")){
        ui->lineEditFrom->setText(ui->lineEditFrom->text()+".");
    }
}

void MainWindow::on_pB_BS_clicked()
{
    QString txt = ui->lineEditFrom->text();
    txt.chop(1); // Удаляет n символов в конце строки.
    ui->lineEditFrom->setText(txt);
}

void MainWindow::on_pB_CE_clicked()
{
    ui->lineEditFrom->clear();
}

void MainWindow::on_pB_Exec_clicked()
{

}



void MainWindow::on_About_triggered()
{
    QMessageBox::about(this,"О программе","Конвертер.\n Авторы программы: Гаев Олег, Гвоздев Дмитрий. \n Конвертор под Windows для преобразования "
                                          "действительных чисел представленных в системе счисления с основанием p1 "
                                          "в действительные числа представленные в системе счисления с основанием p2.");
}

void MainWindow::on_spinBoxBase_valueChanged(int arg1)
{
    for(int i = 0; i < 16; ++i){
        pbNum[i]->setEnabled(i < arg1 ? true : false);
    }
    checkLineEditFrom();
}


void MainWindow::on_lineEditFrom_textEdited(const QString &arg1)
{
    checkLineEditFrom();
}



void MainWindow::on_History_triggered()
{
    History *dialog = new History();
    dialog->exec();
}
