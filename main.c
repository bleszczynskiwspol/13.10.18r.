#include <stdio.h>

int main()
{
    double a1, b1, c1, a2, b2, c2;

    printf("program rozwiązuje układ dwóch równań liniowych.\n");
    printf("Podaj współczynniki.\n");

    printf("podaj a1: ");
    scanf("%lf", &a1);

    printf("podaj b1: ");
    scanf("%lf", &b1);

    printf("podaj c1: ");
    scanf("%lf", &c1);

    printf("podaj a2: ");
    scanf("%lf", &a2);

    printf("podaj b2: ");
    scanf("%lf", &b2);

    printf("podaj c2: ");
    scanf("%lf", &c2);


printf("a1*x + b1*y = c1\n");
printf("a2*x + b2*y = c2\n");

printf("twoj układ równań:\n");
printf("%5.2lf*x + %5.2lf", a1, b1, c1);
printf("%5.2lf*x + %5.2lf", a2, b2, c2);
printf("\n");





    return 0;
}