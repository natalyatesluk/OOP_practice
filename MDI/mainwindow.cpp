#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    addSong =new AddSong;
    addBook=new AddBook ;
    showSong=new SongShow;
    showBook = new BookShow;
    SQLdbm= new SqliteDBManager();
    SQLdbm->connectToDataBase();
    SQLdbm->createTables();
//    connect(addSong, &AddSong::CreateObject,this, &MainWindow::CreateSong);
//    connect(addBook, &AddBook::CreateObject,this, &MainWindow::CreateBook);
//}
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CreateSong(Song *song)
{
    SQLdbm->inserIntoTable(*song);
    emit addedSong(this->SQLdbm);
}

void MainWindow::CreateBook(Audiobook *book)
{
   SQLdbm->inserIntoTable(*book);
     emit addedBook(this->SQLdbm);
}


void MainWindow::on_pb_AddSong_clicked()
{

    addSong->show();
    connect(addSong, &AddSong::CreateObject,this, &MainWindow::CreateSong);
    connect(this, &MainWindow:: addedSong, this->showSong, &SongShow:: updateList);
}


void MainWindow::on_pbAddBook_clicked()
{

    addBook->show();
    connect(addBook, &AddBook::CreateObject,this, &MainWindow::CreateBook);
     connect(this, &MainWindow:: addedBook, this->showBook, &BookShow:: updateList);
}


//void MainWindow::on_pb_ShowSong_clicked()
//{
//    //showSong->AddVector(songs);
//    showSong->show();
//}

//void MainWindow::on_pB_audiobook_clicked()
//{
//    //showBook->AddVector(books);
//    showBook->show();
//}


void MainWindow::on_pb_ShowSong_clicked()
{
    showSong->show();
}


void MainWindow::on_pB_audiobook_clicked()
{
    showBook->show();
}

