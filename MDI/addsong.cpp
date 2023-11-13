#include "addsong.h"
#include "ui_addsong.h"
#include "QPushButton"
#include "QMessageBox"
#include <mainwindow.h>

AddSong::AddSong(QWidget *parent) : QDialog(parent),ui(new Ui::AddSong)
{
    setModal(true);
    ui->setupUi(this);

}

AddSong::~AddSong()
{
    delete ui;
}


void AddSong::on_Button_song_clicked()
{
    QString name= ui->lineEdit_name->text();
    QString artist= ui->lineEdit_artist->text();
    QString album= ui->lineEdit_album->text();
    QString gener = ui->lineEdit_gener->text();
    QString writer = ui->lineEdit_writer->text();
    QString lng= ui->lineEdit_lng->text();
    QString year = ui->lineEdit_year->text();
    QString time = ui->lineEdit_time->text();
    if(!name.isEmpty()&&!artist.isEmpty()&&!album.isEmpty()&&!gener.isEmpty()&&!writer.isEmpty()
        &&!lng.isEmpty()&&!year.isEmpty()&&!time.isEmpty())
    {
        song_crt = new Song ( name.toStdString(), artist.toStdString(),
                            album.toStdString(), gener.toStdString(),writer.toStdString(),lng.toStdString(),
                            year.toInt(),time.toFloat());
        QMessageBox::about(this, "Added song","Greate! Added song");
        emit CreateObject(song_crt);
    }
    else{  QMessageBox::critical(this,"Problem","Empty string");}

}

