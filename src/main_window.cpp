#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QDebug>
#include <QToolBar>
#include <QLabel>
#include <QStatusBar>

#include "include/main_window.h"


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent){
    setupUi();

    setWindowTitle(tr("WMS - Warehouse Management System"));
    setWindowIcon(QIcon(":/images/warehouse.png"));
    setWindowState(Qt::WindowMaximized);
}

void MainWindow::setupUi(){

    createActions();
    createMenus();
    createToolBars();
    createStatusBar();
    createDocksWidgets();
    createCentralWidgets();
}

QAction* MainWindow::createAction(const QString icon_path, const QString text){
    QAction* actTmp = new QAction(QIcon(icon_path),text,this);

    return actTmp;
}

void MainWindow::createActions(){
    /*Rgt*/
    actRgtProducts = createAction(":/images/products.png","Produtos");

    /*Sys*/
    actSysUsers = createAction("","Usuários");
    actSys = createAction(":/images/adduser.png","Sys");

    /*Hlp*/
    actHlpAbout = createAction(":/images/sobre.png","About");;
}

void MainWindow::createMenus(){

    mnuRegisters = new QMenu( tr("Register"), this);
    mnuRegisters->addAction(actRgtProducts);

    mnuSystem    = new QMenu( tr("System")  , this);
    mnuSystem->addAction(actSysUsers);

    mnuHelp      = new QMenu( tr("Help")    , this);
    mnuHelp->addAction(actHlpAbout);

    menuBar()->addMenu(mnuRegisters);
    menuBar()->addMenu(mnuSystem);
    menuBar()->addMenu(mnuHelp);
}

void MainWindow::createToolBars(){

    tlbToolBar = new QToolBar(tr("Tool Bar"),this);
    tlbToolBar->addAction(actRgtProducts);
    // ----- >>>> tlbToolBar->setStyleSheet("");

    addToolBar(tlbToolBar);

}

void MainWindow::createStatusBar(){

    QLabel *lblStatusBar = new QLabel(tr("Não esquecer a status_bar"), this);

    statusBar()->addWidget(lblStatusBar);

}

void MainWindow::createCentralWidgets(){
    // ":/images/central.png"

    QLabel *lblStatusBar = new QLabel(tr("Não esquecer a status_bar"), this);
    lblStatusBar->setAlignment(Qt::AlignCenter);
    lblStatusBar->setPixmap(QPixmap(":/images/central.png"));

    setCentralWidget(lblStatusBar);
}

void MainWindow::createDocksWidgets(){

}
