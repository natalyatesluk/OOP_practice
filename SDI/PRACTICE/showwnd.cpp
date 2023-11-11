#include "showwnd.h"
#include "ui_showwnd.h"
#include "mainwindow.h"

ShowWnd::ShowWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowWnd)
{
    ui->setupUi(this);
}

ShowWnd::~ShowWnd()
{
    delete ui;
}

void ShowWnd::setInformation(Song &song)
{
    ui->show_id->setText(QString::number(song.get_id()));
    ui->show_name->setText(QString::fromStdString(song.get_name()));
    ui->show_artist->setText(QString::fromStdString(song.get_artist()));
    ui->show_album->setText(QString::fromStdString(song.get_album()));
    ui->show_gener->setText(QString::fromStdString(song.get_genre()));
    ui->show_year->setText(QString::number(song.get_year()));
    ui->show_writer->setText(QString::fromStdString(song.get_writer()));
    ui->show_lng->setText(QString::fromStdString(song.get_lng()));;
    ui->show_duration->setText(QString::number(song.get_time()));;
}

void ShowWnd::on_pB_close_clicked()
{
    MainWindow *mainWindow = (MainWindow *)this->parent();
    mainWindow->showMain();
    this->close();
}

