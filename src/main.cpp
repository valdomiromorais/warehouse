/* Ponto de entrada do sistema */
#include <QApplication>
#include <QDebug>
#include <QFile>
#include "include/main_window.h"

int main( int argc, char** argv ){
    QApplication app(argc,argv);

    QFile file(":/styles.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    app.setStyleSheet(styleSheet);

    MainWindow mw;
    mw.show();

    return app.exec();
}//main
