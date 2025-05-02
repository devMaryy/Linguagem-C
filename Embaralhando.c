// Beecrowd 1980

#include <stdio.h>
#include <string.h>

long long fatorial(int n);

int main (void) 
{
    char S[16];  
    while (1) 
    {
        scanf("%s", S);  
        
        // Caso o string seja "0", termina a execução
        if (strcmp(S, "0") == 0) 
        {
            break;
        }
        
        // O número de anagramas é o fatorial do número de caracteres da string
        int n = strlen(S);
        printf("%lld\n", fatorial(n));  
    }
    return 0;
}

// Função para calcular o fatorial de um número
long long fatorial(int n) 
{
    
    long long resultado = 1;
    for (int i = 1; i <= n; i++) 
    {
        resultado *= i;
    }
    return resultado;
}