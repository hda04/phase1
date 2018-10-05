#include "back.h"

back::back()
{
    this->setIcon(QIcon(QPixmap(":images/backButton.png")));
    this->setIconSize(QSize(50,60));
    this->setGeometry(55,750,50,60);

}
