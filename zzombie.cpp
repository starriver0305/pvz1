#include "zzombie.h"

ZZombie::ZZombie()
{
    movie=new QMovie(":/new/prefix1/pictures/Zombie/Zombie.gif");
    movie->start();
}

QRectF ZZombie::boundingRect() const
{
    return QRectF(-50,-50,100,100);
}

void ZZombie::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QImage image=movie->currentImage();
    painter->drawImage(QRectF(-100,-100,200,200),image);
}

void ZZombie::advance(int phase)
{
    qDebug()<<this->scenePos();
    update();
}
