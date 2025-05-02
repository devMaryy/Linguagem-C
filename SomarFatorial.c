// Beecrowd 1161

#include <stdio.h>

long long fatorial(int num); 

int main (void) 
{
    int M, N;
    
    while (scanf("%d %d", &M, &N) != EOF) 
    {
        long long soma;
        soma = fatorial(M) + fatorial(N);

        printf("%lld\n", soma);
    }

    return 0;
}

// Função para calcular o fatorial de um número
long long fatorial(int num) 
{
    long long resultado;
    int i;
    resultado = 1;

    for (i = 1; i <= num; i++) 
        resultado *= i;

    return resultado;
}
