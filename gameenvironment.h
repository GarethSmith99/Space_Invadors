#ifndef GAMEENVIRONMENT_H
#define GAMEENVIRONMENT_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
// kyk en delete
#include <QPainter>


class GameEnvironment : public QGraphicsView, QGraphicsScene
{
public:
    GameEnvironment();

    QGraphicsScene * scene;
    int sceneWidth;
    int sceneHeight;
private:

};

#endif // GAMEENVIRONMENT_H
