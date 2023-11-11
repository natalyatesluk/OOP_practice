/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddBook
{
public:
    QGridLayout *gridLayout;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QLabel *label_artist;
    QLineEdit *lineEdit_artist;
    QLabel *label_pbl;
    QLineEdit *lineEdit_pbl;
    QLabel *label_year;
    QLineEdit *lineEdit_year;
    QLabel *label_format;
    QLineEdit *lineEdit_format;
    QLabel *label_price;
    QLineEdit *lineEdit_price;
    QLabel *label_time;
    QLineEdit *lineEdit_time;
    QPushButton *Button_book;

    void setupUi(QWidget *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName("AddBook");
        AddBook->resize(620, 438);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/office-reports-icon-outline-office-reports-vector-icon-for-web-design-isolated-on-white-background-700-219898713.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AddBook->setWindowIcon(icon);
        gridLayout = new QGridLayout(AddBook);
        gridLayout->setObjectName("gridLayout");
        label_name = new QLabel(AddBook);
        label_name->setObjectName("label_name");
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(16);
        label_name->setFont(font);

        gridLayout->addWidget(label_name, 0, 0, 1, 1);

        lineEdit_name = new QLineEdit(AddBook);
        lineEdit_name->setObjectName("lineEdit_name");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        lineEdit_name->setFont(font1);

        gridLayout->addWidget(lineEdit_name, 0, 1, 1, 1);

        label_artist = new QLabel(AddBook);
        label_artist->setObjectName("label_artist");
        label_artist->setFont(font);

        gridLayout->addWidget(label_artist, 1, 0, 1, 1);

        lineEdit_artist = new QLineEdit(AddBook);
        lineEdit_artist->setObjectName("lineEdit_artist");
        lineEdit_artist->setFont(font1);

        gridLayout->addWidget(lineEdit_artist, 1, 1, 1, 1);

        label_pbl = new QLabel(AddBook);
        label_pbl->setObjectName("label_pbl");
        label_pbl->setFont(font);

        gridLayout->addWidget(label_pbl, 2, 0, 1, 1);

        lineEdit_pbl = new QLineEdit(AddBook);
        lineEdit_pbl->setObjectName("lineEdit_pbl");
        lineEdit_pbl->setFont(font1);

        gridLayout->addWidget(lineEdit_pbl, 2, 1, 1, 1);

        label_year = new QLabel(AddBook);
        label_year->setObjectName("label_year");
        label_year->setFont(font);

        gridLayout->addWidget(label_year, 3, 0, 1, 1);

        lineEdit_year = new QLineEdit(AddBook);
        lineEdit_year->setObjectName("lineEdit_year");
        lineEdit_year->setFont(font1);

        gridLayout->addWidget(lineEdit_year, 3, 1, 1, 1);

        label_format = new QLabel(AddBook);
        label_format->setObjectName("label_format");
        label_format->setFont(font);

        gridLayout->addWidget(label_format, 4, 0, 1, 1);

        lineEdit_format = new QLineEdit(AddBook);
        lineEdit_format->setObjectName("lineEdit_format");
        lineEdit_format->setFont(font1);

        gridLayout->addWidget(lineEdit_format, 4, 1, 1, 1);

        label_price = new QLabel(AddBook);
        label_price->setObjectName("label_price");
        label_price->setFont(font);

        gridLayout->addWidget(label_price, 5, 0, 1, 1);

        lineEdit_price = new QLineEdit(AddBook);
        lineEdit_price->setObjectName("lineEdit_price");
        lineEdit_price->setFont(font1);

        gridLayout->addWidget(lineEdit_price, 5, 1, 1, 1);

        label_time = new QLabel(AddBook);
        label_time->setObjectName("label_time");
        label_time->setFont(font);

        gridLayout->addWidget(label_time, 6, 0, 1, 1);

        lineEdit_time = new QLineEdit(AddBook);
        lineEdit_time->setObjectName("lineEdit_time");
        lineEdit_time->setFont(font1);

        gridLayout->addWidget(lineEdit_time, 6, 1, 1, 1);

        Button_book = new QPushButton(AddBook);
        Button_book->setObjectName("Button_book");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Modern No. 20")});
        font2.setPointSize(22);
        Button_book->setFont(font2);
        Button_book->setFocusPolicy(Qt::StrongFocus);
        Button_book->setAutoFillBackground(false);
        Button_book->setAutoRepeat(false);
        Button_book->setAutoExclusive(false);
        Button_book->setAutoDefault(false);
        Button_book->setFlat(false);

        gridLayout->addWidget(Button_book, 7, 0, 1, 2);


        retranslateUi(AddBook);

        Button_book->setDefault(false);


        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QWidget *AddBook)
    {
        AddBook->setWindowTitle(QCoreApplication::translate("AddBook", "Add book", nullptr));
        label_name->setText(QCoreApplication::translate("AddBook", "Name", nullptr));
        lineEdit_name->setPlaceholderText(QCoreApplication::translate("AddBook", "Enter name...", nullptr));
        label_artist->setText(QCoreApplication::translate("AddBook", "Artist", nullptr));
        lineEdit_artist->setPlaceholderText(QCoreApplication::translate("AddBook", "Enter artist...", nullptr));
        label_pbl->setText(QCoreApplication::translate("AddBook", "Publisher", nullptr));
        lineEdit_pbl->setPlaceholderText(QCoreApplication::translate("AddBook", "Enter publisher...", nullptr));
        label_year->setText(QCoreApplication::translate("AddBook", "Relase year", nullptr));
        lineEdit_year->setPlaceholderText(QCoreApplication::translate("AddBook", "Enter relase yaer...", nullptr));
        label_format->setText(QCoreApplication::translate("AddBook", "Format", nullptr));
        lineEdit_format->setPlaceholderText(QCoreApplication::translate("AddBook", "Enter format...", nullptr));
        label_price->setText(QCoreApplication::translate("AddBook", "Price", nullptr));
        lineEdit_price->setPlaceholderText(QCoreApplication::translate("AddBook", "Enter price...", nullptr));
        label_time->setText(QCoreApplication::translate("AddBook", "Duration", nullptr));
        lineEdit_time->setPlaceholderText(QCoreApplication::translate("AddBook", "Enter duration...", nullptr));
        Button_book->setText(QCoreApplication::translate("AddBook", "Add an audiobook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
