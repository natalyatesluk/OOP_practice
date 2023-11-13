#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QWidget>
#include <QDialog>
#include<audiobook.h>
namespace Ui {
class AddBook;
}

class AddBook : public QDialog
{
    Q_OBJECT

public:
    explicit AddBook(QWidget *parent = nullptr);
    ~AddBook();

private:
    Audiobook *book_crt;
    Ui::AddBook *ui;
private slots:
    void on_Button_book_clicked();
signals:
    void CreateObject(Audiobook*);
};

#endif // ADDBOOK_H
