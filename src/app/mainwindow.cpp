// Header Files
#include "mainwindow.h"

// Qt Widgets
#include <QPushButton>
#include <QVBoxLayout>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

// C++ Headers
#include <vector>
#include <string>
#include <iostream>

EXAMPLE DATABSE = "db.db"

 // Constructor - This is where your widgets will actually go.
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    QWidget *widget = new QWidget(this);
    QPushButton *button = new QPushButton("Welcome to your application!", this);
    QVBoxLayout *layout = new QVBoxLayout(widget);
    layout->addWidget(button);
    setCentralWidget(widget);
}

// Destructor
MainWindow::~MainWindow() {}

// This is where you can define helper functions
vector<string> example_database_function(string table_name) {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(EXAMPLE_DATABASE);
    db.open();
}