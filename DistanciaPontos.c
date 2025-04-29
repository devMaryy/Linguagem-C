#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} TPonto;

double distPontos2d(TPonto p1, TPonto p2);

int main (void) 
{
    TPonto p1, p2;

    // Lê os pontos
    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    // Calcula e imprime a distância com 4 casas decimais
    printf("%.4lf\n", distPontos2d(p1, p2));

    return 0;
}

double distPontos2d(TPonto p1, TPonto p2) 
{
    return sqrt(pow(p2.x - p1.x, 2.0) + pow(p2.y - p1.y, 2.0));
}