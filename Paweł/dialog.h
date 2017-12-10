#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDir>
#include <QDebug>
#include <QRegExp>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_txt_cursorPositionChanged(int arg1, int arg2);

    void on_txt_textChanged(const QString &arg1);

private:
    Ui::Dialog *ui;

    QStringList myList;     //deklaracja listy, do ktorej bedziemy dodawali pozycje
};

#endif // DIALOG_H
