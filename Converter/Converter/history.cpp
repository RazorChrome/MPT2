#include "history.h"
#include "ui_history.h"

History::History(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
}

History::~History()
{
    delete ui;
}

void History::addRecord(QString rec)
{
    QStringList list = rec.split(",");
    int newRow = countRecords();
    ui->tableWidget->setRowCount(newRow+1);
    for(int i = 0; i < columns; ++i)
    {
        ui->tableWidget->setItem(newRow,i,new QTableWidgetItem(list.at(i)));
    }
}

QString History::showRecord(int i)
{
    if(i > countRecords()) return errmsg;
    QString res = "";
    res += ui->tableWidget->item(i,0)->text();
    res += ", " + ui->tableWidget->item(i,1)->text();
    res += " -> " + ui->tableWidget->item(i,2)->text();
    res += ", " + ui->tableWidget->item(i,3)->text();
    return res;
}

int History::countRecords()
{
    return ui->tableWidget->rowCount();
}

void History::clearHistory()
{
    //ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
}

void History::on_pushButton_clicked()
{
   clearHistory();
}
