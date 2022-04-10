#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "dos.h"
#include <ctime>

const int N = 12; //globalna zmienna..

class tab
{
    protected:  // protected- składowe "zabezpieczone" - dostępne dlaobiektów klas pochodnychwzględem danej klasy (niedostępne w zakresie funkcjimaini obiektów innychklas).

    int t[N];
    void zapelnij_tab();
    int max_tab();
    void pokaz_tab();
    public:

    void przetwarzaj();
};

void tab::zapelnij_tab()
{
    srand(time(NULL));
    for(int i=0; i<N; i++) t[i]=rand()%100;
}

int tab::max_tab()
{
    int max=t[0];
    for (int i=1; i<N; i++)if (t[i]>max) max=t[i];
    return max;
}

void tab::pokaz_tab()
{
    printf("\n");

    for (int i=0; i<N; i++)

    printf("%d ", t[i]);
    printf("\n");
}

void tab::przetwarzaj()
{
    zapelnij_tab();
    pokaz_tab();
    printf("Maksimum: %2d\n", max_tab());
}

class tab1: private tab
{
    private:
    int min_tab();

    public:
    void przetwarzaj();
};

int tab1::min_tab()
{
int min=t[0];

for (int i=1; i<N; i++)

if (t[i]<min) 

min=t[i];

return min;
}

void tab1::przetwarzaj()
{
    zapelnij_tab();
    pokaz_tab();

    printf("Minimum: %2d\n", min_tab());
    printf("Maksimum: %2d\n", max_tab());
}

int main()
{
    tab obiekt;
    tab1 obiekt1;

    obiekt.przetwarzaj();
    obiekt1.przetwarzaj();
    getch();return 0;
}