/********************************************************************************
** Form generated from reading UI file 'showsong.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWSONG_H
#define UI_SHOWSONG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowSong
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QLabel *infor_id;
    QLabel *show_id;
    QLabel *label;
    QLabel *show_name;
    QLabel *infor_artist;
    QLabel *show_artist;
    QLabel *infor_album;
    QLabel *show_album;
    QLabel *infor_genre;
    QLabel *show_genre;
    QLabel *infor_year;
    QLabel *show_year;
    QLabel *infor_lng;
    QLabel *show_lng;
    QLabel *infor_writer;
    QLabel *show_writer;
    QLabel *infor_time;
    QLabel *show_time;
    QPushButton *pushButton;

    void setupUi(QWidget *ShowSong)
    {
        if (ShowSong->objectName().isEmpty())
            ShowSong->setObjectName("ShowSong");
        ShowSong->resize(643, 613);
        verticalLayout = new QVBoxLayout(ShowSong);
        verticalLayout->setObjectName("verticalLayout");
        title = new QLabel(ShowSong);
        title->setObjectName("title");
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(22);
        title->setFont(font);

        verticalLayout->addWidget(title);

        infor_id = new QLabel(ShowSong);
        infor_id->setObjectName("infor_id");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Modern No. 20")});
        font1.setPointSize(16);
        infor_id->setFont(font1);

        verticalLayout->addWidget(infor_id);

        show_id = new QLabel(ShowSong);
        show_id->setObjectName("show_id");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        font2.setPointSize(16);
        show_id->setFont(font2);

        verticalLayout->addWidget(show_id);

        label = new QLabel(ShowSong);
        label->setObjectName("label");
        label->setFont(font1);

        verticalLayout->addWidget(label);

        show_name = new QLabel(ShowSong);
        show_name->setObjectName("show_name");
        show_name->setFont(font2);

        verticalLayout->addWidget(show_name);

        infor_artist = new QLabel(ShowSong);
        infor_artist->setObjectName("infor_artist");
        infor_artist->setFont(font1);

        verticalLayout->addWidget(infor_artist);

        show_artist = new QLabel(ShowSong);
        show_artist->setObjectName("show_artist");
        show_artist->setFont(font2);

        verticalLayout->addWidget(show_artist);

        infor_album = new QLabel(ShowSong);
        infor_album->setObjectName("infor_album");
        infor_album->setFont(font1);

        verticalLayout->addWidget(infor_album);

        show_album = new QLabel(ShowSong);
        show_album->setObjectName("show_album");
        show_album->setFont(font2);

        verticalLayout->addWidget(show_album);

        infor_genre = new QLabel(ShowSong);
        infor_genre->setObjectName("infor_genre");
        infor_genre->setFont(font1);

        verticalLayout->addWidget(infor_genre);

        show_genre = new QLabel(ShowSong);
        show_genre->setObjectName("show_genre");
        show_genre->setFont(font2);

        verticalLayout->addWidget(show_genre);

        infor_year = new QLabel(ShowSong);
        infor_year->setObjectName("infor_year");
        infor_year->setFont(font1);

        verticalLayout->addWidget(infor_year);

        show_year = new QLabel(ShowSong);
        show_year->setObjectName("show_year");
        show_year->setFont(font2);

        verticalLayout->addWidget(show_year);

        infor_lng = new QLabel(ShowSong);
        infor_lng->setObjectName("infor_lng");
        infor_lng->setFont(font1);

        verticalLayout->addWidget(infor_lng);

        show_lng = new QLabel(ShowSong);
        show_lng->setObjectName("show_lng");
        show_lng->setFont(font2);

        verticalLayout->addWidget(show_lng);

        infor_writer = new QLabel(ShowSong);
        infor_writer->setObjectName("infor_writer");
        infor_writer->setFont(font1);

        verticalLayout->addWidget(infor_writer);

        show_writer = new QLabel(ShowSong);
        show_writer->setObjectName("show_writer");
        show_writer->setFont(font2);

        verticalLayout->addWidget(show_writer);

        infor_time = new QLabel(ShowSong);
        infor_time->setObjectName("infor_time");
        infor_time->setFont(font1);

        verticalLayout->addWidget(infor_time);

        show_time = new QLabel(ShowSong);
        show_time->setObjectName("show_time");
        show_time->setFont(font2);

        verticalLayout->addWidget(show_time);

        pushButton = new QPushButton(ShowSong);
        pushButton->setObjectName("pushButton");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Modern No. 20")});
        font3.setPointSize(14);
        pushButton->setFont(font3);

        verticalLayout->addWidget(pushButton);

#if QT_CONFIG(shortcut)
        infor_id->setBuddy(infor_id);
        show_id->setBuddy(show_id);
        infor_year->setBuddy(infor_year);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ShowSong);

        QMetaObject::connectSlotsByName(ShowSong);
    } // setupUi

    void retranslateUi(QWidget *ShowSong)
    {
        ShowSong->setWindowTitle(QCoreApplication::translate("ShowSong", "Form", nullptr));
        title->setText(QCoreApplication::translate("ShowSong", "Song information", nullptr));
        infor_id->setText(QCoreApplication::translate("ShowSong", "ID", nullptr));
        show_id->setText(QString());
        label->setText(QCoreApplication::translate("ShowSong", "Name", nullptr));
        show_name->setText(QString());
        infor_artist->setText(QCoreApplication::translate("ShowSong", "Artist:", nullptr));
        show_artist->setText(QString());
        infor_album->setText(QCoreApplication::translate("ShowSong", "Album:", nullptr));
        show_album->setText(QString());
        infor_genre->setText(QCoreApplication::translate("ShowSong", "Genre:", nullptr));
        show_genre->setText(QString());
        infor_year->setText(QCoreApplication::translate("ShowSong", "Relase year:", nullptr));
        show_year->setText(QString());
        infor_lng->setText(QCoreApplication::translate("ShowSong", "Language:", nullptr));
        show_lng->setText(QString());
        infor_writer->setText(QCoreApplication::translate("ShowSong", "Writer:", nullptr));
        show_writer->setText(QString());
        infor_time->setText(QCoreApplication::translate("ShowSong", "Duration:", nullptr));
        show_time->setText(QString());
        pushButton->setText(QCoreApplication::translate("ShowSong", "CLOSE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowSong: public Ui_ShowSong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWSONG_H
