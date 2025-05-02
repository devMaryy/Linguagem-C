#include <stdio.h>

int mdc(int m, int n);

long long int mmc(int a, int b);

int main (void) 
{
    int M, L1, L2, L3;

    while (scanf("%d", &M) != EOF) 
    {
        scanf("%d %d %d", &L1, &L2, &L3);

        // Calcula o MMC das três luas, usando long long int
        long long int mmc12 = mmc(L1, L2);
        long long int mmc_total = mmc(mmc12, L3);

        // Próximo múltiplo de mmc_total maior que M
        long long int proximo = ((M / mmc_total) + 1) * mmc_total;

        // Quantos anos até o próximo alinhamento
        printf("%lld\n", proximo - M);
    }

    return 0;
}

int mdc(int m, int n)
/* Retorna o Máximo Divisor Comum de m e n */
{
    if (m < 0) m = -m;
    if (n < 0) n = -n;

    if (m % n == 0)
        return n;
    else
        return mdc(n, m % n);
}

long long int mmc(int a, int b)
/* Retorna o Minimo Multiplo Comum de a e b */
{
    return (long long int)b * a / mdc(a, b);
}
