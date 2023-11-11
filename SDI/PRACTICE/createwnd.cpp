#include "createwnd.h"
#include "ui_createwnd.h"
#include "mainwindow.h"
#include "QMessageBox"


CreateWnd::CreateWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateWnd)
{
    ui->setupUi(this);
}

CreateWnd::~CreateWnd()
{
    delete ui;
}

void CreateWnd::on_Button_song_clicked()
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
        song_crt = new Song (id.toInt(), name.toStdString(), artist.toStdString(),
                            album.toStdString(), gener.toStdString(),writer.toStdString(),lng.toStdString(),
                            year.toInt(),time.toFloat());
        QMessageBox::about(this, "Create", "Added song");
        emit CreateObject(song_crt);
    }
    else
        QMessageBox::critical(this,"Problem","Empty string");
}

void CreateWnd::on_pushButtonClose_clicked()
{
    MainWindow *mainWindow = (MainWindow *)this->parent();
    mainWindow->showMain();
    this->close();
}

