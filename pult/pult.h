#ifndef PULT_H
#define PULT_H

#include <QString>



class pult
{
public:
    pult();
    int digit(int d);
    int canalup();
    int canaldown();
    int volumeup();
    int volumedown();
    QString india1();
    QString india2();

private:
    int canal;
    int volume;

};

#endif // PULT_H
