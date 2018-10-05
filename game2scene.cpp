#include "game2scene.h"

game2scene::game2scene()
{
    backbutton= new back();
    this->addWidget(backbutton);

    profilepicbutton= new profilepic();
    this->addItem(profilepicbutton);

    settingsbutton= new settings();
    this->addItem(settingsbutton);

    username= new  QLabel("Hussein Alaalamy");
    username->setGeometry(120,20,150,50);
    username->setStyleSheet("QLabel { background-color : white; color : black; }");
    this->addWidget(username);

    XP= new  QLabel("Experience Points: XP");
    XP->setGeometry(120,60,150,40);
    XP->setStyleSheet("QLabel { background-color : white; color : red; }");
    this->addWidget(XP);

    start= new QPushButton("Start New Game");
    start->setGeometry(100,300,800,50);
    start->setStyleSheet("QLabel { background-color : white; color : black; }");
    this->addWidget(start);

    resume= new QPushButton("Continue Your Last Game");
    resume->setGeometry(100,400,800,50);
    resume->setStyleSheet("QLabel { background-color : white; color : black; }");
    this->addWidget(resume);

    levels= new QPushButton("LEVELS");
    levels->setGeometry(100,500,800,50);
    levels->setStyleSheet("QLabel { background-color : white; color : black; }");
    this->addWidget(levels);

    leaderboard = new QPushButton("LeaderBoards");
    leaderboard->setGeometry(100,600,800,50);
    leaderboard->setStyleSheet("QLabel { background-color : white; color : black; }");
    this->addWidget(leaderboard);

    logo = new QGraphicsPixmapItem();
    logo->setPos(420,85);
    logo->setPixmap((QPixmap(":images/joystick")).scaled(200,200));
    logo->setFlag(QGraphicsItem ::ItemIsFocusable);
    logo->setFocus();
    this->addItem(logo);
}
