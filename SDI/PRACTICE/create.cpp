#include "create.h"
#include "ui_create.h"
#include "QMessageBox"


Create::Create(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Create)
{
    ui->setupUi(this);
}

Create::~Create()
{
    delete ui;
}

void Create::on_Button_song_clicked()
{
    QString id= ui->lineEdit_id->text();
    QString name= ui->lineEdit_name->text();
    QString artist= ui->lineEdit_artist->text();
    QString album= ui->lineEdit_album->text();
    QString gener = ui->lineEdit_gener->text();
    QString writer = ui->lineEdit_writer->text();
    QString lng= ui->lineEdit_lng->text();
    QString year = ui->lineEdit_year->text();
    QString time = ui->lineEdit_time->text();

    if(!id.isEmpty()&&!name.isEmpty()&&!artist.isEmpty()&&!album.isEmpty()&&!gener.isEmpty()&&!writer.isEmpty()
        &&!lng.isEmpty()&&!year.isEmpty()&&!time.isEmpty())
    {
        song = new Song (id.toInt(), name.toStdString(), artist.toStdString(),
                        album.toStdString(), gener.toStdString(),writer.toStdString(),lng.toStdString(),
                        year.toInt(),time.toFloat());
        QMessageBox::about(this, "Create", "Added song");
    }
    else
        QMessageBox::critical(this,"Problem","Empty string");
}

Song Create::songCreated(Song& other)
{
    other.setId(song->get_id());
    other.setName(song->get_name());
    other.setArtist(song->get_artist());
    other.setAlbum(song->get_album());
    other.setGenre(song->get_genre());
    other.setWriter(song->get_writer());
    other.setLng(song->get_lng());
    other.setYear(song->get_year());
    other.setTime(song->get_time());
    return other;
}
