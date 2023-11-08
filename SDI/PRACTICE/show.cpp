#include "show.h"
#include "ui_show.h"
void Show::SetInformation( Song& song)
{
   ui->show_id->setText(QString::number(song.get_id()));
    ui->show_name->setText(QString::fromStdString(song.get_name()));
    ui->show_artist->setText(QString::fromStdString(song.get_artist()));
   ui->show_album->setText(QString::fromStdString(song.get_album()));
    ui->show_genre->setText(QString::fromStdString(song.get_genre()));
    ui->show_year->setText(QString::number(song.get_year()));
   ui->show_writer->setText(QString::fromStdString(song.get_writer()));
    ui->show_lng->setText(QString::fromStdString(song.get_lng()));;
   ui->show_time->setText(QString::number(song.get_time()));;



}
Show::Show(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Show)
{
    ui->setupUi(this);

}

Show::~Show()
{
    delete ui;
}





