#include "mainscene.h"

mainscene::mainscene()

{
    mainScene = new QGraphicsScene();
    backbutton= new back();
    mainScene->addWidget(backbutton);

    profilepicbutton= new profilepic();
    mainScene->addItem(profilepicbutton);

    settingsbutton= new settings();
    mainScene->addItem(settingsbutton);

    logo= new QGraphicsPixmapItem();
    logo->setPos(200,70);
    logo->setPixmap((QPixmap(":images/logo.jpg")).scaled(650,200));
    logo->setFlag(QGraphicsItem ::ItemIsFocusable);
    logo->setFocus();
    mainScene->addItem(logo);


    Game1=new QPushButton("Game1");
    Game1->setGeometry(50,300,900,50);
    Game1->setStyleSheet("QLabel { background-color : white; color : black; }");
    mainScene->addWidget(Game1);

    Game2=new QPushButton("Game2");
    Game2->setGeometry(50,450,900,50);
    Game2->setStyleSheet("QLabel { background-color : white; color : black; }");
    mainScene->addWidget(Game2);

    Game3=new QPushButton("Game3");
    Game3->setGeometry(50,600,900,50);
    Game3->setStyleSheet("QLabel { background-color : white; color : black; }");
    mainScene->addWidget(Game3);

    username= new  QLabel("Hussein Alaalamy");
    username->setGeometry(120,20,150,50);
    mainScene->addWidget(username);

    XP= new  QLabel("Experience Points: XP");
    XP->setGeometry(120,60,150,40);
    XP->setStyleSheet("QLabel { background-color : white; color : red; }");
    mainScene->addWidget(XP);

}
