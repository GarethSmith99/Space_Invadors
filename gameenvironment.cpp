#include "gameenvironment.h"

GameEnvironment::GameEnvironment()
{
    // set up screen
    sceneWidth = 1024;
    sceneHeight = 768;
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(sceneWidth, sceneHeight);

    // set up scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, sceneWidth, sceneHeight);
    setScene(scene);
    // add a background color
    scene->setBackgroundBrush(Qt::yellow);

}
