/********************************************************************************
** Form generated from reading UI file 'show.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_H
#define UI_SHOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Show
{
public:
    QGridLayout *gridLayout;
    QLabel *show_album;
    QLabel *infor_id;
    QLabel *show_year;
    QLabel *infor_lng;
    QLabel *infor_writer;
    QLabel *show_writer;
    QLabel *title;
    QLabel *show_time;
    QLabel *infor_genre;
    QLabel *show_artist;
    QLabel *infor_album;
    QLabel *show_lng;
    QLabel *show_id;
    QLabel *show_genre;
    QLabel *infor_artist;
    QLabel *infor_year;
    QLabel *infor_time;
    QLabel *show_name;
    QLabel *label;

    void setupUi(QWidget *Show)
    {
        if (Show->objectName().isEmpty())
            Show->setObjectName("Show");
        Show->resize(556, 377);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/office-reports-icon-outline-office-reports-vector-icon-for-web-design-isolated-on-white-background-700-219898713.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Show->setWindowIcon(icon);
        gridLayout = new QGridLayout(Show);
        gridLayout->setObjectName("gridLayout");
        show_album = new QLabel(Show);
        show_album->setObjectName("show_album");
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(16);
        show_album->setFont(font);

        gridLayout->addWidget(show_album, 7, 1, 1, 2);

        infor_id = new QLabel(Show);
        infor_id->setObjectName("infor_id");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Modern No. 20")});
        font1.setPointSize(16);
        infor_id->setFont(font1);

        gridLayout->addWidget(infor_id, 2, 0, 1, 1);

        show_year = new QLabel(Show);
        show_year->setObjectName("show_year");
        show_year->setFont(font);

        gridLayout->addWidget(show_year, 2, 4, 1, 1);

        infor_lng = new QLabel(Show);
        infor_lng->setObjectName("infor_lng");
        infor_lng->setFont(font1);

        gridLayout->addWidget(infor_lng, 5, 3, 1, 1);

        infor_writer = new QLabel(Show);
        infor_writer->setObjectName("infor_writer");
        infor_writer->setFont(font1);

        gridLayout->addWidget(infor_writer, 3, 3, 1, 1);

        show_writer = new QLabel(Show);
        show_writer->setObjectName("show_writer");
        show_writer->setFont(font);

        gridLayout->addWidget(show_writer, 3, 4, 1, 1);

        title = new QLabel(Show);
        title->setObjectName("title");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Modern No. 20")});
        font2.setPointSize(22);
        title->setFont(font2);

        gridLayout->addWidget(title, 0, 2, 1, 1);

        show_time = new QLabel(Show);
        show_time->setObjectName("show_time");
        show_time->setFont(font);

        gridLayout->addWidget(show_time, 6, 4, 1, 1);

        infor_genre = new QLabel(Show);
        infor_genre->setObjectName("infor_genre");
        infor_genre->setFont(font1);

        gridLayout->addWidget(infor_genre, 6, 0, 1, 1);

        show_artist = new QLabel(Show);
        show_artist->setObjectName("show_artist");
        show_artist->setFont(font);

        gridLayout->addWidget(show_artist, 5, 1, 1, 2);

        infor_album = new QLabel(Show);
        infor_album->setObjectName("infor_album");
        infor_album->setFont(font1);

        gridLayout->addWidget(infor_album, 7, 0, 1, 1);

        show_lng = new QLabel(Show);
        show_lng->setObjectName("show_lng");
        show_lng->setFont(font);

        gridLayout->addWidget(show_lng, 5, 4, 1, 1);

        show_id = new QLabel(Show);
        show_id->setObjectName("show_id");
        show_id->setFont(font);

        gridLayout->addWidget(show_id, 2, 1, 1, 2);

        show_genre = new QLabel(Show);
        show_genre->setObjectName("show_genre");
        show_genre->setFont(font);

        gridLayout->addWidget(show_genre, 6, 1, 1, 2);

        infor_artist = new QLabel(Show);
        infor_artist->setObjectName("infor_artist");
        infor_artist->setFont(font1);

        gridLayout->addWidget(infor_artist, 5, 0, 1, 1);

        infor_year = new QLabel(Show);
        infor_year->setObjectName("infor_year");
        infor_year->setFont(font1);

        gridLayout->addWidget(infor_year, 2, 3, 1, 1);

        infor_time = new QLabel(Show);
        infor_time->setObjectName("infor_time");
        infor_time->setFont(font1);

        gridLayout->addWidget(infor_time, 6, 3, 1, 1);

        show_name = new QLabel(Show);
        show_name->setObjectName("show_name");
        show_name->setFont(font);

        gridLayout->addWidget(show_name, 3, 1, 1, 1);

        label = new QLabel(Show);
        label->setObjectName("label");
        label->setFont(font1);

        gridLayout->addWidget(label, 3, 0, 1, 1);

#if QT_CONFIG(shortcut)
        infor_id->setBuddy(infor_id);
        show_id->setBuddy(show_id);
        infor_year->setBuddy(infor_year);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Show);

        QMetaObject::connectSlotsByName(Show);
    } // setupUi

    void retranslateUi(QWidget *Show)
    {
        Show->setWindowTitle(QCoreApplication::translate("Show", "Show", nullptr));
        show_album->setText(QString());
        infor_id->setText(QCoreApplication::translate("Show", "ID", nullptr));
        show_year->setText(QString());
        infor_lng->setText(QCoreApplication::translate("Show", "Language:", nullptr));
        infor_writer->setText(QCoreApplication::translate("Show", "Writer:", nullptr));
        show_writer->setText(QString());
        title->setText(QCoreApplication::translate("Show", "Song information", nullptr));
        show_time->setText(QString());
        infor_genre->setText(QCoreApplication::translate("Show", "Genre:", nullptr));
        show_artist->setText(QString());
        infor_album->setText(QCoreApplication::translate("Show", "Album:", nullptr));
        show_lng->setText(QString());
        show_id->setText(QString());
        show_genre->setText(QString());
        infor_artist->setText(QCoreApplication::translate("Show", "Artist:", nullptr));
        infor_year->setText(QCoreApplication::translate("Show", "Relase year:", nullptr));
        infor_time->setText(QCoreApplication::translate("Show", "Duration:", nullptr));
        show_name->setText(QString());
        label->setText(QCoreApplication::translate("Show", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Show: public Ui_Show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_H
