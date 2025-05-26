// Beecrowd  1022

#include <stdio.h>
#include <stdlib.h>

int mdc(int m, int n); 

int main (void) 
{
    int N;
    scanf("%d", &N);

    while (N--) 
    {
        int n1, d1, n2, d2, rn = 0, rd = 0;
        char op, slash;

        scanf("%d %c %d %c %d %c %d", &n1, &slash, &d1, &op, &n2, &slash, &d2);

        if (op == '+') 
        {
            rn = n1 * d2 + n2 * d1;
            rd = d1 * d2;
        } 
        else if (op == '-') 
        {
            rn = n1 * d2 - n2 * d1;
            rd = d1 * d2;
        } 
        else if (op == '*') 
        {
            rn = n1 * n2;
            rd = d1 * d2;
        } 
        else if (op == '/') 
        {
            rn = n1 * d2;
            rd = n2 * d1;
        }

        int divisor = mdc(rn, rd);  
        int sn = rn / divisor;
        int sd = rd / divisor;

        printf("%d/%d = %d/%d\n", rn, rd, sn, sd);
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
