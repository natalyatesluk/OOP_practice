#include "mainwindow.h"
#include "ui_mainwindow.h"
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

void MainWindow::on_Button_create_clicked()
{
   createWindow->show();
}
void MainWindow::on_actioncreat_object_triggered()
{
    on_Button_create_clicked();
}


void MainWindow::on_actionexit_triggered()
{
    QApplication::quit();
}




void MainWindow::on_actionshow_triggered()
{
    Song other;
    other=createWindow->songCreated(other);
    showWindow->SetInformation(other);
    showWindow->show();
}




