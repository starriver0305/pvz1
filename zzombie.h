#ifndef ZZOMBIE_H
#define ZZOMBIE_H

#include<QMovie>
#include<QPainter>
#include<QGraphicsItem>
#include<QTimer>
#include<QMouseEvent>
#include<QDebug>
#include<QGraphicsView>
#include"bare.h"
#include"gameover.h"
class ZZombie:public QGraphicsItem
{
private:
    QMovie* movie;
public:
    ZZombie();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void advance(int phase);
};

#endif // ZZOMBIE_H
