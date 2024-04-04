#include "pult.h"



pult::pult()
{

}

int pult::digit(int d)
{
   canal = d;
   return 0;
}

int pult::canalup()
{
    canal ++;
    if(canal >= 50)
    {
       canal = 50;
    }
    return 0;
}

int pult::canaldown()
{
    canal --;
    if(canal <= 1)
    {
       canal = 1;
    }
    return 0;
}

int pult::volumeup()
{
    volume = volume + 10;
    if(volume >= 100)
    {
       volume = 100;
    }
    return 0;
}

int pult::volumedown()
{
    volume = volume - 10;
    if(volume <= 0)
    {
       volume = 0;
    }
    return 0;
}

QString pult::india1()
{

    QString canalString = QString::number(canal);
    canalString.prepend("canal: ");
    QString volumeString = QString::number(volume);
    volumeString.prepend("volume: ");
    return canalString + " " + volumeString;


}

QString pult::india2()
{
//    return QString::number(volume);

    QString volumeString = QString::number(volume);
    volumeString.prepend("volume: ");
    return volumeString;
}


