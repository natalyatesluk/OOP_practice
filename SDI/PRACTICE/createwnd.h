#ifndef CREATEWND_H
#define CREATEWND_H

#include <QWidget>
#include <song.h>

namespace Ui {
class CreateWnd;
}

class CreateWnd : public QWidget
{
    Q_OBJECT

public:
    explicit CreateWnd(QWidget *parent = nullptr);
    ~CreateWnd();

private slots:
    void on_Button_song_clicked();
    void on_pushButtonClose_clicked();

private:
    Ui::CreateWnd *ui;
    Song* song_crt;
signals:
    void CreateObject(Song*);
};

#endif // CREATEWND_H
