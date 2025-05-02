// Beecrowd 3165

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool eh_primo(int num);

int main(void) 
{
    int N;
    scanf("%d", &N);

    int ultimo_primo = -1, resposta1 = -1, resposta2 = -1;

    for (int i = 2; i <= N; i++) 
    {
        if (eh_primo(i)) 
        {
            // Verifica se a diferença entre dois primos consecutivos é 2 (primos gêmeos)
            // Atualiza o par resposta com o último par encontrado até N
            if (ultimo_primo != -1 && i - ultimo_primo == 2) 
            {
                resposta1 = ultimo_primo;
                resposta2 = i;
            }
            ultimo_primo = i;
        }
    }

    if (resposta1 != -1 && resposta2 != -1)
        printf("%d %d\n", resposta1, resposta2);

    return 0;
}

// Função para verificar se um número é primo
bool eh_primo(int num) 
{
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    // Testa divisibilidade até a raiz quadrada de num, otimizando a verificação
    for (int i = 3; i <= sqrt(num); i += 2) 
    {
        if (num % i == 0) return false;
    }

    return true;
}
