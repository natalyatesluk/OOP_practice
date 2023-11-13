#ifndef SONGSHOW_H
#define SONGSHOW_H

#include <QWidget>
#include <QDialog>
#include "sqlitedbmanager.h"
namespace Ui {
class SongShow;
}

class SongShow : public QDialog
{
    Q_OBJECT

public:
    explicit SongShow(QWidget *parent = nullptr);
    ~SongShow();

private:
    Ui::SongShow *ui;
public slots:
     void updateList (SqliteDBManager* sqliteDBM);
};

#endif // SONGSHOW_H
