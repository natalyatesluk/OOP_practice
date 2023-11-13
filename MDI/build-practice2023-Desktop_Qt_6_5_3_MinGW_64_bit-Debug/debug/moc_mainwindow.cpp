/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../practice2023/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "addedSong",
    "",
    "SqliteDBManager*",
    "sQldb",
    "addedBook",
    "sqldb",
    "CreateSong",
    "Song*",
    "song",
    "CreateBook",
    "Audiobook*",
    "book",
    "on_pb_AddSong_clicked",
    "on_pbAddBook_clicked",
    "on_pb_ShowSong_clicked",
    "on_pB_audiobook_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[6];
    char stringdata5[10];
    char stringdata6[6];
    char stringdata7[11];
    char stringdata8[6];
    char stringdata9[5];
    char stringdata10[11];
    char stringdata11[11];
    char stringdata12[5];
    char stringdata13[22];
    char stringdata14[21];
    char stringdata15[23];
    char stringdata16[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 9),  // "addedSong"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 16),  // "SqliteDBManager*"
        QT_MOC_LITERAL(39, 5),  // "sQldb"
        QT_MOC_LITERAL(45, 9),  // "addedBook"
        QT_MOC_LITERAL(55, 5),  // "sqldb"
        QT_MOC_LITERAL(61, 10),  // "CreateSong"
        QT_MOC_LITERAL(72, 5),  // "Song*"
        QT_MOC_LITERAL(78, 4),  // "song"
        QT_MOC_LITERAL(83, 10),  // "CreateBook"
        QT_MOC_LITERAL(94, 10),  // "Audiobook*"
        QT_MOC_LITERAL(105, 4),  // "book"
        QT_MOC_LITERAL(110, 21),  // "on_pb_AddSong_clicked"
        QT_MOC_LITERAL(132, 20),  // "on_pbAddBook_clicked"
        QT_MOC_LITERAL(153, 22),  // "on_pb_ShowSong_clicked"
        QT_MOC_LITERAL(176, 23)   // "on_pB_audiobook_clicked"
    },
    "MainWindow",
    "addedSong",
    "",
    "SqliteDBManager*",
    "sQldb",
    "addedBook",
    "sqldb",
    "CreateSong",
    "Song*",
    "song",
    "CreateBook",
    "Audiobook*",
    "book",
    "on_pb_AddSong_clicked",
    "on_pbAddBook_clicked",
    "on_pb_ShowSong_clicked",
    "on_pB_audiobook_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       5,    1,   65,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   68,    2, 0x0a,    5 /* Public */,
      10,    1,   71,    2, 0x0a,    7 /* Public */,
      13,    0,   74,    2, 0x08,    9 /* Private */,
      14,    0,   75,    2, 0x08,   10 /* Private */,
      15,    0,   76,    2, 0x08,   11 /* Private */,
      16,    0,   77,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'addedSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SqliteDBManager *, std::false_type>,
        // method 'addedBook'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SqliteDBManager *, std::false_type>,
        // method 'CreateSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Song *, std::false_type>,
        // method 'CreateBook'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Audiobook *, std::false_type>,
        // method 'on_pb_AddSong_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbAddBook_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pb_ShowSong_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pB_audiobook_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addedSong((*reinterpret_cast< std::add_pointer_t<SqliteDBManager*>>(_a[1]))); break;
        case 1: _t->addedBook((*reinterpret_cast< std::add_pointer_t<SqliteDBManager*>>(_a[1]))); break;
        case 2: _t->CreateSong((*reinterpret_cast< std::add_pointer_t<Song*>>(_a[1]))); break;
        case 3: _t->CreateBook((*reinterpret_cast< std::add_pointer_t<Audiobook*>>(_a[1]))); break;
        case 4: _t->on_pb_AddSong_clicked(); break;
        case 5: _t->on_pbAddBook_clicked(); break;
        case 6: _t->on_pb_ShowSong_clicked(); break;
        case 7: _t->on_pB_audiobook_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(SqliteDBManager * );
            if (_t _q_method = &MainWindow::addedSong; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(SqliteDBManager * );
            if (_t _q_method = &MainWindow::addedBook; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::addedSong(SqliteDBManager * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::addedBook(SqliteDBManager * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
