// Beecrowd 2180

#include <stdio.h>
#include <math.h>

int eh_primo(int n);

int main (void) 
{
    int peso_combustivel;
    scanf("%d", &peso_combustivel);

    int cont_primos = 0;
    int verificando_primo = peso_combustivel;
    long long velocidade = 0;

    while (cont_primos < 10) 
    {
        if (eh_primo(verificando_primo)) 
        {
            velocidade += verificando_primo;
            cont_primos++;
        }
        verificando_primo++;
    }

    long long distancia_km = 60000000LL; // 60 milhões de km
    long long tempo_horas = distancia_km / velocidade;
    long long tempo_dias = tempo_horas / 24;

    printf("%lld km/h\n", velocidade);
    printf("%lld h / %lld d\n", tempo_horas, tempo_dias);

    return 0;
}

// Função para verifica se um número é primo
int eh_primo(int n) 
{
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
