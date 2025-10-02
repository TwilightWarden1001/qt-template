#include "mainwindow.h"   // Declaration of MainWindow class
#include <QApplication>   // Required for any Qt GUI application
#include <QFile>          // For reading the QSS stylesheet

int main(int argc, char *argv[]) 
{
    QApplication app(argc, argv);
    // The APP_NAME macro is passed in from the CMakeLists.txt file.
    // This avoids hardcoding the application name here.
    app.setApplicationName(APP_NAME);

    // Load stylesheet from resources
    QFile styleFile(":/styles/dark.qss");
    if (styleFile.open(QFile::ReadOnly | QFile::Text)) {
        qApp->setStyleSheet(styleFile.readAll());
    }

    MainWindow window;
    window.setMinimumSize(600, 800);
    window.show();

    return app.exec();  // Start Qt event loop
}