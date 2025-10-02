#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>

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