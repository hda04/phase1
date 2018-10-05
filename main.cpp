#include <QApplication>
#include <QtWidgets>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <gameslayoutScene.h>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    gamesLayoutScene *view= new gamesLayoutScene();
    view->show();

    return app.exec();
}
