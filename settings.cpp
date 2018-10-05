#include "settings.h"

settings::settings(QObject *parent) : QObject(parent)
{
    this->setPos(870,30);
    this->setPixmap((QPixmap(":images/settings.png")).scaled(50,60));
    this->setFlag(QGraphicsItem ::ItemIsFocusable);
    this->setFocus();
}
void settings :: mousePressEvent(QGraphicsSceneMouseEvent *event)
{
}
