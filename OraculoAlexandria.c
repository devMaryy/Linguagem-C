// Beecrowd 1457

#include <stdio.h>

long long calcular_k_fatorial(int N, int K);

int main (void) 
{
    int num_testes; 
    scanf("%d", &num_testes); 

    while (num_testes--) 
    {
        int numero;  
        char exclama[20];  
        scanf("%d%s", &numero, exclama); 
        
        int quantidade_exclama = 0; 
        
        while (exclama[quantidade_exclama] == '!') 
        {
            quantidade_exclama++; 
        }
        
        // Calcula o K-fatorial de numero com base na quantidade de exclamações
        long long resultado_k_fatorial = calcular_k_fatorial(numero, quantidade_exclama);
        
        printf("%lld\n", resultado_k_fatorial);
    }

    return 0;
}

// Função para calcular o K-fatorial de um número N
long long calcular_k_fatorial(int N, int K) 
{
    long long resultado = 1;
    
    while (N > 0) 
    {
        resultado *= N;  
        N -= K;  
    }
    
    return resultado; 
}