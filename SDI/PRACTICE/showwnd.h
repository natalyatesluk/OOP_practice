#ifndef SHOWWND_H
#define SHOWWND_H

#include <QWidget>
#include <song.h>

namespace Ui {
class ShowWnd;
}

class ShowWnd : public QWidget
{
    Q_OBJECT

public:
    explicit ShowWnd(QWidget *parent = nullptr);
    ~ShowWnd();
    void setInformation(Song &song);
private slots:
    void on_pB_close_clicked();

private:
    Ui::ShowWnd *ui;
};

#endif // SHOWWND_H
