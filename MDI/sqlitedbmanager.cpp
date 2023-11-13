#include "sqlitedbmanager.h"
#include <QFile>
#include <QSqlError>
#include <song.h>


SqliteDBManager::SqliteDBManager()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/QtProjects/MDI/build-practice2023-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/Sound.db");
    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
    } else {
        qDebug() << "Connected to the database!";
    }


}

bool SqliteDBManager::openDataBase() {
    if (db.open()) {
        return true;
    } else
        return false;
}
bool SqliteDBManager::restoreDataBase()
{
    if (this->openDataBase()) {
        if (!this->createTables_book() || !this->createTables_song()) {
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не вдалось відновити базу даних";
        return false;
    }
}

SqliteDBManager::~SqliteDBManager()
{
    db.close();
}


void SqliteDBManager::connectToDataBase()
{
    if (QFile("./Sound.db").exists()) {
        this->openDataBase();
    } else {
        this->restoreDataBase();
    }
}
QSqlDatabase SqliteDBManager::getDB()
{
    return db;
}
bool SqliteDBManager::createTables_book()
{
    QSqlQuery query_book;
    if (!query_book.exec("CREATE TABLE Book ("
                         "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                         "Name VARCHAR(260),"
                         "Artist VARCHAR(260),"
                         "Publisher VARCHAR(260),"
                         "Format VARCHAR(260),"
                         "Relase_year INTEGER,"
                         "Duration DECIMAL(5,3),"
                         "Price DECIMAL(5,4));"))
    {
        qDebug() << "DataBase: error of create " << TABLE_BOOK;
        qDebug() << query_book.lastError().text();
        return false;
    }
    else {return true;}
}

bool SqliteDBManager::createTables_song()
{
    QSqlQuery query_song;
    if(!query_song.exec("CREATE TABLE Song ("
                             "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                            " Name VARCHAR(260),"
                             "Artist VARCHAR(260),"
                             "Genre VARCHAR(260),"
                             "Album VARCHAR(260),"
                             "Writer VARCHAR(260),"
                            " Lng VARCHAR(260),"
                             "Relase_year INTEGER,"
                             "Duration DECIMAL(5,4));" ))
    {
        qDebug() << "DataBase: error of create " << TABLE_SONG;
        qDebug() << query_song.lastError().text();
        return false;
    }
    else {return true;}
}

bool SqliteDBManager::createTables()
{
    bool success = true;

    // Check if the Book table exists.
    QSqlQuery query_book;
    query_book.prepare("SELECT name FROM sqlite_master WHERE type='table' AND name='Book'");
    query_book.exec();

    if (!query_book.next()) {
        // The Book table does not exist. Create it.
        success = createTables_book();
    }

    // Check if the Song table exists.
    QSqlQuery query_song;
    query_song.prepare("SELECT name FROM sqlite_master WHERE type='table' AND name='Song'");
    query_song.exec();

    if (!query_song.next()) {
        // The Song table does not exist. Create it.
        success = createTables_song();
    }

    return success;
}

bool SqliteDBManager::inserIntoTable( Audiobook &book)
{
    QSqlQuery query_book;

    query_book.prepare("INSERT INTO " TABLE_BOOK " ( " TABLE_ID ", "
                       TABLE_NAME ", "
                       TABLE_ARTIST ", "
                       TABLE_YEAR ", "
                       TABLE_DURATION ", "
                       TABLE_PBL ", "
                       TABLE_FORMT ", "
                       TABLE_PRICE " ) "
                       "VALUES (:Id, :Name, :Artist, :Year, :Duration, :Publisher, :Format, :Price)");

    query_book.bindValue(":Id", QString::number(book.get_id()));
    query_book.bindValue(":Name", QString::fromStdString(book.get_name()));
    query_book.bindValue(":Artist", QString::fromStdString(book.get_artist()));
    query_book.bindValue(":Year", QString::number(book.get_year()));
    query_book.bindValue(":Duration", QString::number(book.get_time()));
    query_book.bindValue(":Publisher", QString::fromStdString(book.get_publisher()));
    query_book.bindValue(":Format", QString::fromStdString(book.get_format()));
    query_book.bindValue(":Price", QString::number(book.get_price()));

    if (!query_book.exec()) {
        qDebug() << "error insert into " << TABLE_BOOK;
        qDebug() << query_book.lastError().text();
        qDebug() << query_book.lastQuery();

        return false;
    } else {
        return true;
    }


}

bool SqliteDBManager::inserIntoTable(Song &song)
{
    QSqlQuery qeury_song;

    qeury_song.prepare("INSERT INTO Song (Name, Artist, Duration, Album, Genre, Lng, Writer) "
                       "VALUES (:Name, :Artist, :Duration, :Album, :Genre,:Lng, :Writer);");

    qeury_song.bindValue(":Name", QString::fromStdString(song.get_name()));
    qeury_song.bindValue(":Artist", QString::fromStdString(song.get_artist()));
    qeury_song.bindValue(":Duration", QString::number(song.get_time()));
    qeury_song.bindValue(":Album", QString::fromStdString(song.get_album()));
    qeury_song.bindValue(":Genre", QString::fromStdString(song.get_genre()));
    qeury_song.bindValue(":Writer", QString::fromStdString(song.get_writer()));
    qeury_song.bindValue(":Lng",QString::fromStdString(song.get_lng()));

    if (!qeury_song.exec()) {
        qDebug() << "error insert into " << TABLE_SONG;
        qDebug() << qeury_song.lastError().text();
        qDebug() << qeury_song.lastQuery();

        return false;
    }
    else {
        return true;
    }
}

