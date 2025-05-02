// Beecrowd 1936

#include <stdio.h>

int main (void) 
{
    int N;
    scanf("%d", &N); // Lê o número que queremos representar como soma de fatoriais

    int f[11]; // Vetor para guardar os fatoriais de 0! até 10!
    f[0] = 1;  // 0! é igual a 1

    // Calcula os fatoriais e guarda no vetor f[]
    for (int i = 1; i <= 10; i++) 
    {
        f[i] = f[i - 1] * i; // Exemplo: 3! = 2! * 3
    }

    int k = 0; // Contador de quantos fatoriais usamos

    // Tenta usar os maiores fatoriais possíveis primeiro (estratégia gulosa)
    for (int i = 10; i >= 1; i--) 
    {
        while (N >= f[i]) 
        { // Enquanto ainda puder subtrair esse fatorial...
            N -= f[i]; // Subtrai o fatorial de N
            k++;       // Conta que usamos mais um fatorial
        }
    }

    printf("%d\n", k); // Mostra quantos fatoriais usamos no total

    return 0;
}
