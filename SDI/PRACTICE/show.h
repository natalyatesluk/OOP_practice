#ifndef SHOW_H
#define SHOW_H

#include <QWidget>
#include <create.h>
#include <song.h>

namespace Ui {
class Show;
}

class Show : public QWidget
{
    Q_OBJECT

public:
    explicit Show(QWidget *parent = nullptr);
    ~Show();
    void SetInformation( Song& song);
private:
    Ui::Show *ui;
    Create out;
};

#endif // SHOW_H
