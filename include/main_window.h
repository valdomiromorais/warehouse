#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>

class QMenu;
class QAction;
class QToolBar;

class MainWindow : public QMainWindow{
    public:
        explicit MainWindow(QWidget *parent = nullptr);

    private slots:

    private:
        /*Auxiliary functions*/
        void setupUi();
        QAction* createAction(const QString icon_path ="", const QString text="");
        void createActions();
        void createMenus();
        void createToolBars();
        void createStatusBar();
        void createCentralWidgets();
        void createDocksWidgets();


        /*Actions*/

        /*Rgt*/
        QAction* actRgtProducts;

        /*Sys*/
        QAction* actSysUsers;
        QAction* actSys;

        /*Hlp*/
        QAction *actHlpAbout;

        QMenu *mnuRegisters; // Rgt
        QMenu *mnuSystem;    // Sys
        QMenu *mnuHelp;      // Hlp

        QToolBar *tlbToolBar;

};//end class

#endif // MAIN_WINDOW_H
