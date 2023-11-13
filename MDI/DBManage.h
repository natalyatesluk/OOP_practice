#ifndef DBMANAGE_H
#define DBMANAGE_H

#endif // DBMANAGE_H

#include <QSqlDatabase>
#include <song.h>
#include <audiobook.h>

class DBManager {
public:
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool inserIntoTable( Audiobook& book) = 0;
    virtual bool inserIntoTable( Song& song)=0;
};
