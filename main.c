#include <stdio.h>

double wyznacznik(double k, double l, double m, double n) {
    return k * n - l * m;
}

int main() {

    double a1, b1, c1, a2, b2, c2;
    double Wy;
    double Wx;
    double W;
    double x, y;

    printf("program rozwiązuje układ dwóch równań liniowych.\n");
    printf("Podaj współczynniki.\n");
    printf("a1*x + b1*y = c1\n");
    printf("a2*x + b2*y = c2\n");
    printf("Podaj współczynniki.\n");


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


    printf("twoj układ równań:\n");
    printf("%5.2lf*x + %5.2lf", a1, b1, c1);
    printf("%5.2lf*x + %5.2lf", a2, b2, c2);
    printf("\n");

    W = wyznacznik(a1, a2, b1, b2);
    Wx = wyznacznik(c1, c2, b1, b2);
    Wy = wyznacznik(a1, a2, c1, c2);


    printf("wyznacznik W = %lf", W);
    printf("wyznacznik Wx = %lf", Wx);
    printf("wyznacznik Wy = %lf", Wy);


    if(W !=0){
        x = Wx / W;
        y = Wy / W;
        printf("rozwiązanie:\n");
        printf("x = %5.2lf, y = %5.2lf", x y);
        printf("\n");
    } else{
        if(Wx !=0 || Wy != 0){
            printf("układ równań sprzeczny - nie ma rozwiązania.");
            else{
                printf("układ równań nieoznaczony - nieskończenie wielerozwiązań.");
            }
        }
    }








    return 0;
}























