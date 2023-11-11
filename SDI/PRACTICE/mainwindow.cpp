#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createwnd.h"
#include <QString>
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::showMain()
{
    ui->label_namePR->show();
    ui->pB_create->show();
}
void MainWindow::CreateSong (Song* song)
{
    this->song= song;
}





void MainWindow::on_pB_create_clicked()
{
    ui->pB_create->hide();
    ui->label_namePR->hide();
    createWindow= new CreateWnd (this);
    connect(createWindow, &CreateWnd::CreateObject,this, &MainWindow::CreateSong);
    createWindow->show();
}



void MainWindow::on_actioncreat_triggered()
{
    on_pB_create_clicked();
}


void MainWindow::on_actionshow_triggered()
{
    ui->label_namePR->hide();
    ui->pB_create->hide();
    showWindow= new ShowWnd (this);
    showWindow->setInformation(*song);
    showWindow->show();
}


void MainWindow::on_actionexit_triggered()
{
    QApplication::quit();
}

