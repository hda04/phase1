#ifndef GAMESLAYOUT_H
#define GAMESLAYOUT_H

#include <QObject>
#include <QWidget>
#include<QtWidgets>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QIcon>
#include<back.h>
#include<settings.h>
#include<profilepic.h>
#include<game1scene.h>
#include<game2scene.h>
#include<game3scene.h>
#include<mainscene.h>




class gamesLayoutScene : public QGraphicsView
{
    Q_OBJECT
public:
   gamesLayoutScene();
   mainscene *mainScene;
   QIcon *icon;
   QPixmap *image;


signals:

public slots:
   void game1Button();
   void game2Button();
   void game2ButtonUpdate();
   void game3Button();
   void back_button();




};

#endif // GAMESLAYOUT_H
