//Beecrowd 
#include <stdio.h>

int mdc(int m, int n);

long long int mmc(int a, int b);

int main (void) 
{
    int M, L1, L2, L3;

    while (scanf("%d", &M) != EOF) 
    {
        scanf("%d %d %d", &L1, &L2, &L3);

        long long int mmc12 = mmc(L1, L2);
        long long int mmc_total = mmc(mmc12, L3);

        long long int proximo = ((M / mmc_total) + 1) * mmc_total;

        printf("%lld\n", proximo - M);
    }

    return 0;
}

// Função para calcular o MDC
int mdc(int m, int n)
{
    if (m < 0) m = -m;
    if (n < 0) n = -n;

    if (m % n == 0)
        return n;
    else
        return mdc(n, m % n);
}

// Função para calcular o MMC
long long int mmc(int a, int b)
{
    return (long long int)b * a / mdc(a, b);
}
