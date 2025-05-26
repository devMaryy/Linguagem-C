// Beecrowd 1028

#include <stdio.h>

int mdc(int m, int n);

int main (void) 
{
    int N, F1, F2;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
    {
        scanf("%d %d", &F1, &F2);
        printf("%d\n", mdc(F1, F2));
    }

    return 0;
}

// Função para o cálculo do MDC
int mdc(int m, int n)
{
    if (m < 0) m = -m;
    if (n < 0) n = -n;

    if (m % n == 0)
        return n;
    else
        return mdc(n, m % n);
}
