#ifndef ADDSONG_H
#define ADDSONG_H
#pragma once
#include <QWidget>
#include <QDialog>
#include <song.h>
namespace Ui {
class AddSong;
}

class AddSong : public QDialog
{
    Q_OBJECT

public:
    explicit AddSong(QWidget *parent = nullptr);

    ~AddSong();  
private:
    Song *song_crt;
    Ui::AddSong *ui;
private slots:
    void on_Button_song_clicked();
signals:
    void CreateObject(Song*);
};

#endif // ADDSONG_H
