/* Ponto de entrada do sistema */
#include <QApplication>
#include <QDebug>
#include "include/main_window.h"

int main( int argc, char** argv ){
    QApplication app(argc,argv);

    MainWindow mw;
    mw.show();

    return app.exec();
}//main
