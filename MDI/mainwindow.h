#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <song.h>
#include <audiobook.h>
#include <addsong.h>
#include <QVector>
#include <addbook.h>
#include <songshow.h>
#include <bookshow.h>
#include <QSqlDatabase>

#include <sqlitedbmanager.h>

class QSqlTableModel;

class DBManager;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private:
   // QVector<Song*> songs;
   // QVector<Audiobook*> books;
    AddSong* addSong;
    AddBook* addBook;
    SongShow* showSong;
    BookShow* showBook;
   SqliteDBManager *SQLdbm;
    Ui::MainWindow *ui;
public slots:
    void CreateSong (Song* song);
    void CreateBook (Audiobook* book);
private slots:
    void on_pb_AddSong_clicked();
    void on_pbAddBook_clicked();
    void on_pb_ShowSong_clicked();

    void on_pB_audiobook_clicked();

signals:
    void addedSong (SqliteDBManager *sQldb);
    void addedBook (SqliteDBManager *sqldb);
//    void on_pb_ShowSong_clicked();
//    void on_pB_audiobook_clicked();
};
#endif // MAINWINDOW_H
