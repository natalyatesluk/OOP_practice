#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <song.h>
#include <createwnd.h>
#include <showwnd.h>
#include <QIcon>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase main;
    void showMain();
public slots:
    void CreateSong (Song* song);
private slots:
    void on_pB_create_clicked();

    void on_actioncreat_triggered();

    void on_actionshow_triggered();

    void on_actionexit_triggered();

private:
    Ui::MainWindow *ui;
    Song *song;
    CreateWnd *createWindow;
    ShowWnd *showWindow;
};
#endif // MAINWINDOW_H
