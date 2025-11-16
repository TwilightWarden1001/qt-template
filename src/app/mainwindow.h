#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <string>
using namespace std;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
// We use private slots here so that the rest of the program cannot use them
private slots:
    void on_button_clicked();
};
#endif // MAINWINDOW_H