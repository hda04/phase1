#include "gameslayoutScene.h"

gamesLayoutScene::gamesLayoutScene()
{

    image= new QPixmap(":images/logo.jpg");
    icon=new QIcon(QPixmap(":images/logo.jpg"));

    mainScene = new mainscene();

    this->setHorizontalScrollBarPolicy((Qt::ScrollBarAlwaysOff));
    this->setVerticalScrollBarPolicy((Qt::ScrollBarAlwaysOff));
    this->setFixedSize(900,800);
    this->setScene(mainScene->mainScene);

    connect(mainScene->Game1,SIGNAL(clicked(bool)),this,SLOT(game1Button()));
    connect(mainScene->Game2,SIGNAL(clicked(bool)),this,SLOT(game2Button()));
    connect(mainScene->Game3,SIGNAL(clicked(bool)),this,SLOT(game3Button()));




    setBackgroundBrush(QBrush(QImage(":images/background.jpg")));

}

void gamesLayoutScene :: game1Button()
{
    game1Scene *scene= new game1Scene();
    this->setFixedSize(900,800);
    this->setScene(scene);
    connect(scene->backbutton,SIGNAL(clicked(bool)),this,SLOT(back_button()));

}
void gamesLayoutScene :: game2Button()
{
    game2scene *scene= new game2scene();
    this->setFixedSize(900,800);
    this->setScene(scene);
    connect(scene->backbutton,SIGNAL(clicked(bool)),this,SLOT(back_button()));

}
void gamesLayoutScene :: game3Button()
{
    game3scene *scene= new game3scene();
    QGraphicsView *view=new QGraphicsView();
    this->setFixedSize(900,800);
    this->setScene(scene);
    connect(scene->backbutton,SIGNAL(clicked(bool)),this,SLOT(back_button()));

}
void gamesLayoutScene :: game2ButtonUpdate()
{
    game1Scene *scene= new game1Scene();
    this->setFixedSize(900,800);
    this->setScene(scene);
}
void gamesLayoutScene :: back_button()
{
    mainscene *scene=new mainscene();
    this->setScene(scene->mainScene);
    connect(scene->Game1,SIGNAL(clicked(bool)),this,SLOT(game1Button()));
    connect(scene->Game2,SIGNAL(clicked(bool)),this,SLOT(game2Button()));
    connect(scene->Game3,SIGNAL(clicked(bool)),this,SLOT(game3Button()));
}
