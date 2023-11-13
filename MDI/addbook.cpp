#include "addbook.h"
#include "ui_addbook.h"
#include <QMessageBox>

AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    setModal(true);
    ui->setupUi(this);
}

AddBook::~AddBook()
{
    delete ui;
}

void AddBook::on_Button_book_clicked()
{

    QString name= ui->lineEdit_name->text();
    QString artist= ui->lineEdit_artist->text();
    QString pbl= ui->lineEdit_pbl->text();
    QString format = ui->lineEdit_format->text();
    QString price = ui->lineEdit_price->text();
    QString year = ui->lineEdit_year->text();
    QString time = ui->lineEdit_time->text();
    if(!name.isEmpty()&&!artist.isEmpty()&&!pbl.isEmpty()&&!format.isEmpty()&&!price.isEmpty()
        &&!year.isEmpty()&&!time.isEmpty())
    {
        book_crt = new Audiobook (name.toStdString(),artist.toStdString(),pbl.toStdString(),year.toInt(),
                                 time.toFloat(),price.toFloat(),format.toStdString());
        QMessageBox::about(this, "Added book","Greate! Added book");
     emit CreateObject(book_crt);
    }
    else{  QMessageBox::critical(this,"Problem","Empty string");}

}

