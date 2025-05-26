//Beecrowd 2443

#include <stdio.h>

int mdc(int m, int n);

int main(void) 
{
    int a, b, c, d, numerador, denominador, divisor;
    printf("Digite os 4 numeros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    numerador = a * d + c * b;
    denominador = b * d;

    divisor = mdc(numerador, denominador);
    numerador /= divisor;
    denominador /= divisor;

    printf("%d %d\n", numerador, denominador);

    return 0;
}

// Função para calcular o Máximo Divisor Comum (MDC)
int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;
	
	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}
