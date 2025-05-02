// Beecrowd 1307

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int binarioParaDecimal(char *bin);

int mdc(int a, int b);

int main (void) 
{
    int N;
    scanf("%d", &N);
    char s1[35], s2[35];

    for (int i = 1; i <= N; i++) 
    {
        scanf("%s", s1);
        scanf("%s", s2);

        int num1 = binarioParaDecimal(s1);
        int num2 = binarioParaDecimal(s2);

        int resultado = mdc(num1, num2);

        if (resultado > 1)
            printf("Pair #%d: All you need is love!\n", i);
        else
            printf("Pair #%d: Love is not all you need!\n", i);
    }

    return 0;
}

// Função para converter binário (string) para inteiro
int binarioParaDecimal(char *bin) 
{
    return (int) strtol(bin, NULL, 2);
}

// Função para calcular o MDC (máximo divisor comum)
int mdc(int a, int b) 
{
    while (b != 0) 
    {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}