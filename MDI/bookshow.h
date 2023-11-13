#ifndef BOOKSHOW_H
#define BOOKSHOW_H

#include <QWidget>
#include <QDialog>
#include "sqlitedbmanager.h"
namespace Ui {
class BookShow;
}

class BookShow : public QDialog
{
    Q_OBJECT

public:
    explicit BookShow(QDialog *parent = nullptr);
    ~BookShow();

private:
    Ui::BookShow *ui;
public slots:
    void updateList (SqliteDBManager* sqliteDBM);
};

#endif // BOOKSHOW_H
