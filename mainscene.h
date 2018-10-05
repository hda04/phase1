#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QObject>
#include <QWidget>
#include<QtWidgets>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include<settings.h>
#include<profilepic.h>
#include<back.h>

class mainscene:public QGraphicsScene
{
public:
    mainscene();
    QGraphicsScene *mainScene;
    back *backbutton;
    profilepic *profilepicbutton;
    settings *settingsbutton;
    QLabel *username;
    QLabel *XP;
    QPushButton *Game1;
    QPushButton *Game2;
    QPushButton *Game3;
    QGraphicsPixmapItem *logo;
};

#endif // MAINSCENE_H
