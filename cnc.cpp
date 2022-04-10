#include <stdio.h>
#include <conio.h>
#include <math.h>

const float PI = 3.14; // zmienna globalna...

class kolo
{
    friend void podaj_promien(kolo &, double);

    private: //prywatne..

    double promien;
    double pole, obwod;
    void podaj_promien();
    void obliczaj();
    void pokaz_wyniki();

    public: //publiczne..

    void przetwarzaj();
    };