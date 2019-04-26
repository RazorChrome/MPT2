#ifndef HISTORY_H
#define HISTORY_H

#include <QDialog>

namespace Ui {
class History;
}

class History : public QDialog
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = nullptr);
    ~History();
    void addRecord(QString rec);
    QString showRecord(int i);
    int countRecords();
    void clearHistory();
private slots:
    void on_pushButton_clicked();
private:
    const int columns = 2;
    const QString errmsg = "This record not exist";
    Ui::History *ui;
};

#endif // HISTORY_H
