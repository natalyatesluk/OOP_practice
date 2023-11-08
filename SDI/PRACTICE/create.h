#ifndef CREATE_H
#define CREATE_H

#include <QWidget>
#include <song.h>

namespace Ui {
class Create;
}

class Create : public QWidget
{
    Q_OBJECT

public:
    explicit Create(QWidget *parent = nullptr);
    ~Create();

private slots:
    void on_Button_song_clicked();

private:
    Ui::Create *ui;
     Song* song;
public:
     Song songCreated(Song& other);
};

#endif // CREATE_H
