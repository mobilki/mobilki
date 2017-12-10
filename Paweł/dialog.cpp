#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QDir myPath("E:/ksiazki/");     //sciezka do folderu z ksiazkami, mozna podpiac baze danych
    myPath.setFilter(QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot);
    myList = myPath.entryList();     //przypisanie naszej sciezki
    ui->listWidget->addItems(myList);       //dodanie pozycji do naszej listy
    ui->lbltotal->setText(QString("%1").arg(ui->listWidget->count()));      //zliczanie wszystkich istniejacych pozycji

}
Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_txt_textChanged(const QString &arg1)
{
    QRegExp regExp(arg1, Qt::CaseInsensitive, QRegExp::Wildcard);
    ui->listWidget->clear();  //wyczyszczenie listy
    ui->listWidget->addItems(myList.filter(regExp));        //wyswietlenie w QListWidget pozycji pasujacych do naszych warunkow podanych do filtra
    ui->lbltotal->setText(QString("%1").arg(ui->listWidget->count())); //zliczanie istniejacych pozycji po sortowaniu
}
