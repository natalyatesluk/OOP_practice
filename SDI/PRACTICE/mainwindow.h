#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <song.h>
#include <create.h>
#include <show.h>
#include <QIcon>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actioncreat_object_triggered();
    void on_actionexit_triggered();
    void on_actionshow_triggered();

    void on_Button_create_clicked();


private:
    Ui::MainWindow *ui;
    Create *createWindow = new Create();
    Show *showWindow = new Show();
};
#endif // MAINWINDOW_H
