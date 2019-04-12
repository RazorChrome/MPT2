#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pbNum[0] = ui->pB0;
    pbNum[1] = ui->pB1;
    pbNum[2] = ui->pB2;
    pbNum[3] = ui->pB3;
    pbNum[4] = ui->pB4;
    pbNum[5] = ui->pB5;
    pbNum[6] = ui->pB6;
    pbNum[7] = ui->pB7;
    pbNum[8] = ui->pB8;
    pbNum[9] = ui->pB9;
    pbNum[10] = ui->pBA;
    pbNum[11] = ui->pBB;
    pbNum[12] = ui->pBC;
    pbNum[13] = ui->pBD;
    pbNum[14] = ui->pBE;
    pbNum[15] = ui->pBF;

}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::charToInt(char c)
{
    if((c >= cSmallA && c <= cSmallF)){
        return c - cSmallA + A;
    }
    else if(c >= cA && c <= cF){
        return c - cA + A;
    }
    else if(c >= c0 && c <= c9){
        return c - c0;
    }
    else if(c == cDot) return Dot;
    else return -1;
}

void MainWindow::checkLineEditFrom()
{
    QString txt = ui->Input->text().toUpper();
    int i = 0, to = ui->BasespinBox->value();
    bool dot = false;
    while (i < txt.size()){
        int num = charToInt(txt[i].toLatin1());
        if(num >= 0 && num < to){
            ++i;
        }
        else if(num == Dot){
            if(dot){
                txt.remove(i, 1);
            }
            else{
                dot = true;
                ++i;
            }
        }
        else{
            txt.remove(i, 1);
        }
    }
    ui->Input->setText(txt);
}

void MainWindow::on_Input_textEdited(const QString &arg1)
{
    checkLineEditFrom();
}

void MainWindow::on_pB0_clicked()
{
    ui->Input->setText(ui->Input->text()+c0);
}

void MainWindow::on_pB1_clicked()
{
    ui->Input->setText(ui->Input->text()+c1);
}

void MainWindow::on_pB2_clicked()
{
    ui->Input->setText(ui->Input->text()+c2);
}

void MainWindow::on_pB3_clicked()
{
    ui->Input->setText(ui->Input->text()+c3);
}

void MainWindow::on_pB4_clicked()
{
    ui->Input->setText(ui->Input->text()+c4);
}

void MainWindow::on_pB5_clicked()
{
    ui->Input->setText(ui->Input->text()+c5);
}

void MainWindow::on_pB6_clicked()
{
    ui->Input->setText(ui->Input->text()+c6);
}

void MainWindow::on_pB7_clicked()
{
  ui->Input->setText(ui->Input->text()+c7);
}

void MainWindow::on_pB8_clicked()
{
    ui->Input->setText(ui->Input->text()+c8);
}

void MainWindow::on_pB9_clicked()
{
    ui->Input->setText(ui->Input->text()+c9);
}

void MainWindow::on_pBA_clicked()
{
    ui->Input->setText(ui->Input->text()+cA);
}

void MainWindow::on_pBB_clicked()
{
    ui->Input->setText(ui->Input->text()+cB);
}

void MainWindow::on_pBC_clicked()
{
    ui->Input->setText(ui->Input->text()+cC);
}

void MainWindow::on_pBD_clicked()
{
    ui->Input->setText(ui->Input->text()+cD);
}

void MainWindow::on_pBE_clicked()
{
    ui->Input->setText(ui->Input->text()+cE);
}

void MainWindow::on_pBF_clicked()
{
    ui->Input->setText(ui->Input->text()+cF);
}


void MainWindow::on_DotpushButton_clicked()
{
    if(!ui->Input->text().contains(".")){
        ui->Input->setText(ui->Input->text()+".");
    }
}

void MainWindow::on_PlusMinuspushButton_clicked()
{
    bool min =false;
    if(!min){
        if(!ui->Input->text().contains("-")){
            ui->Input->setText(ui->Input->text()+"-");
        }
}
}

void MainWindow::on_PluspushButton_clicked()
{

}


void MainWindow::on_MinuspushButton_clicked()
{
    if(!ui->Input->text().contains("-")){
        ui->Input->setText(ui->Input->text()+"-");
    }
}

void MainWindow::on_MulpushButton_clicked()
{
    if(!ui->Input->text().contains("*")){
        ui->Input->setText(ui->Input->text()+"*");
    }
}

void MainWindow::on_DividepushButton_clicked()
{
    if(!ui->Input->text().contains("÷")){
        ui->Input->setText(ui->Input->text()+"÷");
    }
}

void MainWindow::on_BSpushButton_clicked()
{
    QString txt = ui->Input->text();
    txt.chop(1); // Удаляет n символов в конце строки.
    ui->Input->setText(txt);
}

void MainWindow::on_CEpushButton_clicked()
{
    ui->Input->clear();
    // с очисткой памяти???
}

void MainWindow::on_CpushButton_clicked()
{
    ui->Input->clear();
}

void MainWindow::on_SqrtpushButton_clicked()
{
    if(!ui->Input->text().contains("÷")){
        ui->Input->setText(ui->Input->text()+"÷");
    }
}

void MainWindow::on_pB1divx_clicked()
{

}

void MainWindow::on_ResultpushButton_clicked()
{

}

void MainWindow::on_BasespinBox_valueChanged(int arg1)
{
    for(int i = 0; i < numButtons; ++i){
        pbNum[i]->setEnabled(i < arg1 ? true : false);
    }
    checkLineEditFrom();
}



void MainWindow::on_lastactions_triggered()
{
    hist.exec();
}

void MainWindow::on_AboutAction_triggered()
{
    QMessageBox::about(this,"О программе","Калькулятор P-ых чисел.\n Авторы программы: Гаев Олег, Гвоздев Дмитрий. \n ");
}

void MainWindow::on_MemStatus_textChanged(const QString &arg1)
{

}
