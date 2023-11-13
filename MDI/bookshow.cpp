#include "bookshow.h"
#include "ui_bookshow.h"
#include "sqlitedbmanager.h"
#include "QSqlTableModel"

BookShow::BookShow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::BookShow)
{
    setModal(false);
    ui->setupUi(this);
}

BookShow::~BookShow()
{
    delete ui;
}

void BookShow::updateList(SqliteDBManager *sqliteDB)
{
    QSqlTableModel *qSqlModel =  new QSqlTableModel(this, sqliteDB->getDB());
    qSqlModel->setTable(sqliteDB->NAME_BOOK);
    qSqlModel->select();
    ui->tableBook->setModel(qSqlModel);
}
