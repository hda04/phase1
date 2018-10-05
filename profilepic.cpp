#include "profilepic.h"

profilepic::profilepic(QObject *parent) : QObject(parent)
{
    this->setPos(30,30);
    this->setPixmap((QPixmap(":images/DP.jpg")).scaled(100,100));
    this->setFlag(QGraphicsItem ::ItemIsFocusable);
    this->setFocus();
}
void profilepic :: mousePressEvent(QGraphicsSceneMouseEvent *event)
{
}
