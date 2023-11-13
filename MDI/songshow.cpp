#include "songshow.h"
#include "ui_songshow.h"
#include "sqlitedbmanager.h"
#include "QSqlTableModel"

SongShow::SongShow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SongShow)
{
    setModal(false);
    ui->setupUi(this);
}

SongShow::~SongShow()
{
    delete ui;
}

void SongShow::updateList(SqliteDBManager *sqliteDBM)
{
    QSqlTableModel *qSqlModel =  new QSqlTableModel(this, sqliteDBM->getDB());
    qSqlModel->setTable(sqliteDBM->NAME_SONG);
    qSqlModel->select();
    ui->tableSong->setModel(qSqlModel);
}
