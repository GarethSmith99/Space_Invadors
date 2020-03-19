#include <QApplication>
#include "gameenvironment.h"

GameEnvironment  *gameEnvironment;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    gameEnvironment = new GameEnvironment();
    gameEnvironment->show();


    return a.exec();
}
