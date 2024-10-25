/* Ponto de entrada do sistema */
#include <QApplication>
#include <QDebug>

int main( int argc, char** argv ){
    QApplication app(argc,argv);
    qDebug() << "System is run ..." ;
    return app.exec();
}//main
