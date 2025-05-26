//Beecrowd 1153

#include <stdio.h>

int main(void) 
{
    int n, i, resultado;
    resultado = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
        resultado *= i;

    printf("%d\n", resultado);

    return 0;
}
