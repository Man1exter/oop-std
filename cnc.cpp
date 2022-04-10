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

    void kolo::obliczaj()
    {
        pole = PI * pow(promien,2.0);
        obwod = 2 * PI * promien;
    }

    void kolo::pokaz_wyniki()
    {
        printf("\n Parametry kola: ");
        printf("\n Promien=%.3lE", promien);
        printf("\n Pole=%.3lE", pole);
        printf("\n Obwod=%3lE\n\n", obwod);
    }

    void kolo::przetwarzaj()
    {
    obliczaj();
    pokaz_wyniki();
    }

    int main()
    {
        kolo k1;
        podaj_promien(k1, 3.0);
        k1.przetwarzaj();
        getch();
        return 0;
        }
        
    void podaj_promien(kolo &k, double r)
    {
        k.promien=r;
    }