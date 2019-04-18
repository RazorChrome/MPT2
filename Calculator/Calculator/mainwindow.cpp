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
    rx.setPattern(str1);
    window()->setStyleSheet("QLineEdit {border: none}");

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
    QString txt = ui->Result->text().toUpper();
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
    ui->Result->setText(txt);
}

void MainWindow::on_Result_textEdited(const QString &arg1)
{

    checkLineEditFrom();
}

void MainWindow::on_pB0_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+c0);

}

void MainWindow::on_pB1_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+c1);
}

void MainWindow::on_pB2_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+c2);
}

void MainWindow::on_pB3_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+c3);
}

void MainWindow::on_pB4_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+c4);
}

void MainWindow::on_pB5_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+c5);
}

void MainWindow::on_pB6_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+c6);
}

void MainWindow::on_pB7_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+c7);
}

void MainWindow::on_pB8_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+c8);
}

void MainWindow::on_pB9_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+c9);
}

void MainWindow::on_pBA_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+cA);
}

void MainWindow::on_pBB_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+cB);
}

void MainWindow::on_pBC_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+cC);
}

void MainWindow::on_pBD_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+cD);
}

void MainWindow::on_pBE_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+cE);
}

void MainWindow::on_pBF_clicked()
{
    if(ui->Result->text() == "0") ui->Result->setText("");
    ui->Result->setText(ui->Result->text()+cF);
}


void MainWindow::on_DotpushButton_clicked()
{
    if(!ui->Result->text().contains(".")){
        ui->Result->setText(ui->Result->text()+".");
    }
}

void MainWindow::on_PlusMinuspushButton_clicked()
{
        if(!ui->Result->text().contains("-")){
            ui->Result->setText(ui->Result->text().prepend("-"));
        }
        else
        {
            ui->Result->setText(ui->Result->text().remove(0,1));
        }
}

void MainWindow::on_PluspushButton_clicked()
{
    if(!ui->Result->text().isEmpty() && !oper)
    {
        if(pushed)
        {
            ui->Input->setText(ui->Result->text()+"+");
            pushed = false;
        }
        else
        {

            ui->Input->setText(ui->Input->text()+ui->Result->text()+"+");
        }
        Pnumber p(ui->Result->text().toStdString(),to_string(ui->BasespinBox->value()));
        if(proc.getLeft() == zero)
        {
            proc.setLeft(p);
        }
        else
        {
            proc.setRight(p);
        }
        proc.setOptn(Add);
        oper = true;
        ui->Result->setText("");
    }
}


void MainWindow::on_MinuspushButton_clicked()
{
    if(!ui->Result->text().isEmpty() && !oper)
    {
        if(pushed)
        {
            ui->Input->setText(ui->Result->text()+"-");
            pushed = false;
        }
        else
        {
            ui->Input->setText(ui->Input->text()+ui->Result->text()+"-");

        }
        Pnumber p(ui->Result->text().toStdString(),to_string(ui->BasespinBox->value()));
        if(proc.getLeft() == zero)
        {
            proc.setLeft(p);
        }
        else
        {
            proc.setRight(p);
        }
        proc.setOptn(Sub);
        oper = true;
        ui->Result->setText("");
    }
}

void MainWindow::on_MulpushButton_clicked()
{
    if(!ui->Result->text().isEmpty() && !oper)
    {
        if(pushed)
        {
            ui->Input->setText(ui->Result->text()+"*");
            pushed = false;
        }
        else
        {
            ui->Input->setText(ui->Input->text()+ui->Result->text()+"*");

        }
        Pnumber p(ui->Result->text().toStdString(),to_string(ui->BasespinBox->value()));
        if(proc.getLeft() == zero)
        {
            proc.setLeft(p);
        }
        else
        {
            proc.setRight(p);
        }
        proc.setOptn(Mul);
        oper = true;
        ui->Result->setText("");
    }
}

void MainWindow::on_DividepushButton_clicked()
{
    if(!ui->Result->text().isEmpty() && !oper)
    {
        if(pushed)
        {
            ui->Input->setText(ui->Result->text()+"/");
            pushed = false;
        }
        else
        {
            ui->Input->setText(ui->Input->text()+ui->Result->text()+"/");

        }
        Pnumber p(ui->Result->text().toStdString(),to_string(ui->BasespinBox->value()));
        if(proc.getLeft() == zero)
        {
            proc.setLeft(p);
        }
        else
        {
            proc.setRight(p);
        }
        proc.setOptn(Dvd);
        oper = true;
        ui->Result->setText("");
    }
}

void MainWindow::on_BSpushButton_clicked()
{
    QString txt = ui->Result->text();
    txt.chop(1);
    ui->Result->setText(txt);
}

void MainWindow::on_CEpushButton_clicked()
{
    ui->Result->clear();
}

void MainWindow::on_CpushButton_clicked()
{
    pushed = false;
    oper = false;
    proc.reset();
    ui->Input->clear();
    ui->Result->clear();
}


void MainWindow::on_SquarepushButton_clicked()
{
    Pnumber p(ui->Result->text().toStdString(),to_string(ui->BasespinBox->value()));
    p = p.square();
    ui->Result->setText(QString::fromStdString(p.getAstring()));
}

void MainWindow::on_pB1divx_clicked()
{
    if(!ui->Result->text().isEmpty() && ui->Result->text() != "0")
    {
        Pnumber p(ui->Result->text().toStdString(),to_string(ui->BasespinBox->value()));
        p = p.reverse();
        ui->Result->setText(QString::fromStdString(p.getAstring()));
    }
}

void MainWindow::on_ResultpushButton_clicked()
{
    QString rec;
    QString right = "";
    oper = false;
    if(!pushed)
    {
        pushed = true;
        ui->Input->setText(ui->Input->text()+ui->Result->text());
        if(!ui->Result->text().isEmpty())
        {
            Pnumber p(ui->Result->text().toStdString(),to_string(ui->BasespinBox->value()));
            proc.setRight(p);
        }
        else
        {
            proc.setRight(proc.getLeft());
        }
    }
    rec = QString::fromStdString(proc.getLeft().getAstring());
    switch(proc.getOptn())
    {
        case Add: rec += "+"+QString::fromStdString(proc.getRight().getAstring()); break;
        case Sub: rec += "-"+QString::fromStdString(proc.getRight().getAstring()); break;
        case Mul: rec += "*"+QString::fromStdString(proc.getRight().getAstring()); break;
        case Dvd: rec += "/"+QString::fromStdString(proc.getRight().getAstring()); break;
    }
    rec += "(p = " + QString::number(ui->BasespinBox->value()) + "),";
    proc.OptnRun();
    ui->Result->setText(QString::fromStdString(proc.getLeft().getAstring()));
    rec += ui->Result->text();
    hist.addRecord(rec);
}

void MainWindow::on_BasespinBox_valueChanged(int arg1)
{
    pushed = false;
    for(int i = 0; i < numButtons; ++i){
        pbNum[i]->setEnabled(i < arg1 ? true : false);
    }
    proc.reset();
    ui->Result->setText("");
    ui->Input->setText("");
    Pnumber p = mem.get();
    p.setB(arg1);
    mem.write(p);
}



void MainWindow::on_lastactions_triggered()
{
    hist.exec();
}

void MainWindow::on_AboutAction_triggered()
{
    QMessageBox::about(this,"О программе","Калькулятор P-ых чисел.\n Авторы программы: Гаев Олег, Гвоздев Дмитрий. \n ");
}

void MainWindow::on_MCpushButton_clicked()
{
    if(mem.getState())
    {
        ui->MemStatus->setText("");
    }
    mem.clear();
}

void MainWindow::on_MRpushButton_clicked()
{
    ui->Result->setText(QString::fromStdString(mem.get().getAstring()));
}

void MainWindow::on_MSpushButton_clicked()
{
    if(!mem.getState())
    {
        ui->MemStatus->setText("M");
    }
    Pnumber p(ui->Result->text().toStdString(),to_string(ui->BasespinBox->value()));
    mem.write(p);
}

void MainWindow::on_MpluspushButton_clicked()
{
    if(!mem.getState())
    {
        ui->MemStatus->setText("M");
    }
    Pnumber p(ui->Result->text().toStdString(),to_string(ui->BasespinBox->value()));
    mem.add(p);
}


