// Header Files
#include "mainwindow.h"

// Qt Widgets
#include <QPushButton>
#include <QMessageBox>
#include <QObject>
#include <QVBoxLayout>
#include <QSqlDatabase>
#include <QString>
using namespace std;

// Global Variable(s)
const QString EXAMPLE_DATABASE = "db.db";

 // Constructor - This is where your widgets will actually go.
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    QWidget *widget = new QWidget(this);
    QPushButton *button = new QPushButton("Welcome to your application!", this);
    connect(button, &QPushButton::clicked, this, &MainWindow::on_button_clicked);
    QVBoxLayout *layout = new QVBoxLayout(widget);
    layout->addWidget(button);
    setCentralWidget(widget);
}

// Destructor
MainWindow::~MainWindow() {}

// This is where you can define helper 
// This is an example of opening a database
void MainWindow::on_button_clicked() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(EXAMPLE_DATABASE);
    if (!db.open()) {
        QMessageBox::critical(nullptr, QObject::tr("Cannot open database"),
            QObject::tr("Unable to establish a database connection.\n"
                        "This example needs SQLite support. Please read "
                        "the Qt SQL driver documentation for information how "
                        "to build it.\n\n"
                        "Click Cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::information(nullptr, QObject::tr("Opened database successfully"),
            QObject::tr("Connection with SQLite has been established."), QMessageBox::Ok);
        // You can close the database connection when you're done with it.
        db.close();
    }
}