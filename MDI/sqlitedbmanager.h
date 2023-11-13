#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#define TABLE_BOOK         "Book"
#define TABLE_ID            "Id"
#define TABLE_SONG         "Song"
#define TABLE_NAME         "Name"
#define TABLE_ARTIST       "Artist"
#define TABLE_YEAR         "Relase_year"
#define TABLE_DURATION     "Duration"
#define TABLE_ALBUM       "Album"
#define TABLE_PBL         "Publisher"
#define TABLE_GENRE        "Genre"
#define TABLE_FORMT         "Format"
#define TABLE_LNG           "Language"
#define TABLE_PRICE          "Price"
#define TABLE_WRITER           "Writer"


#include<QSqlDatabase>
#include <QSqlQuery>
#include <DBManage.h>
class SqliteDBManager : public DBManager
{
    QSqlDatabase db;
    bool openDataBase();
    bool restoreDataBase();

public:

    SqliteDBManager();
    ~SqliteDBManager();
    const QString NAME_BOOK= "Book";
    const QString NAME_SONG= "Song";
    void connectToDataBase() override;
    void closeDataBase();
    QSqlDatabase getDB() override;
    bool createTables_book();
    bool createTables_song();
    bool createTables();
    bool inserIntoTable(Audiobook& book) override;
    bool inserIntoTable(Song& song) override;
};

#endif // SQLITEDBMANAGER_H
