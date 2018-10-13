#include <stdio.h>

void Wyswietl_informacje();

void wczytaj_wspolczynniki(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2);

void wyswietl_uklad_rownan(double a1, double b1, double c1, double a2, double b2, double c2);

void
oblicz_wyznaczniki(double a1, double b1, double c1, double a2, double b2, double c2, double *Wy, double *Wx, double *W);

void wyswietl_wyznaczniki(double Wy, double Wx, double W);

void oblicz_rozwiazanie(double Wy, double Wx, double W, double x, double y);

double wyznacznik(double k, double l, double m, double n) {
    return k * n - l * m;
}

int main() {

    double a1, b1, c1, a2, b2, c2;
    double Wy;
    double Wx;
    double W;
    double x, y;

    Wyswietl_informacje();


    wczytaj_wspolczynniki(&a1, &b1, &c1, &a2, &b2, &c2);

    wyswietl_uklad_rownan(a1, b1, c1, a2, b2, c2);

    oblicz_wyznaczniki(a1, b1, c1, a2, b2, c2, &Wy, &Wx, &W);


    wyswietl_wyznaczniki(Wy, Wx, W);


    oblicz_rozwiazanie(Wy, Wx, W, x, y);


    return 0;
}

void oblicz_rozwiazanie(double Wy, double Wx, double W, double x, double y) {
    if(W != 0.0){
        x = Wx / W;
        y = Wy / W;
        printf("rozwiązanie:\n");
        printf("x = %5.2lf, y = %5.2lf", x, y);
        printf("\n");
    } else{
        if(Wx !=0 || Wy != 0) {
            printf("układ równań sprzeczny - nie ma rozwiązania.");
        }else{
                printf("układ równań nieoznaczony - nieskończenie wielerozwiązań.");
            }

    }
}

void wyswietl_wyznaczniki(double Wy, double Wx, double W) {
    printf("wyznacznik W = %lf\n", W);
    printf("wyznacznik Wx = %lf\n", Wx);
    printf("wyznacznik Wy = %lf\n", Wy);
    printf("\n");
}

void
oblicz_wyznaczniki(double a1, double b1, double c1, double a2, double b2, double c2, double *Wy, double *Wx, double *W) {
    (*W) = wyznacznik(a1, a2, b1, b2);
    (*Wx) = wyznacznik(c1, c2, b1, b2);
    (*Wy) = wyznacznik(a1, a2, c1, c2);
}

void wyswietl_uklad_rownan(double a1, double b1, double c1, double a2, double b2, double c2) {
    printf("twoj układ równań:\n");
    printf("%5.2lf*x + %5.2lf*y = %5.2lf\n", a1, b1, c1);
    printf("%5.2lf*x + %5.2lf*y = %5.2lf\n", a2, b2, c2);
    printf("\n");
}

void wczytaj_wspolczynniki(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2) {
    printf("podaj a1: ");
    scanf("%lf", a1);
    printf("podaj b1: ");
    scanf("%lf", b1);
    printf("podaj c1: ");
    scanf("%lf", c1);
    printf("podaj a2: ");
    scanf("%lf", a2);
    printf("podaj b2: ");
    scanf("%lf", b2);
    printf("podaj c2: ");
    scanf("%lf", c2);
    printf("\n");
}

void Wyswietl_informacje() {
    printf("program rozwiązuje układ dwóch równań liniowych.\n");
    printf("a1*x + b1*y = c1\n");
    printf("a2*x + b2*y = c2\n");
    printf("\n");
    printf("Podaj współczynniki.\n");
}























