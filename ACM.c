// Beecrowd 1429
#include <stdio.h>
#include <string.h>

int fatorial(int n); 

int main (void) 
{
    char ACM[10]; // Vetor para armazenar o número ACM como string (até 5 dígitos + segurança extra)

    // Loop infinito para processar cada número até que "0" seja lido
    while (1) {
        scanf("%s", ACM); // Lê o número como string

        // Se o número for "0", termina a execução
        if (strcmp(ACM, "0") == 0)
            break;

        int len = strlen(ACM); // Calcula o comprimento da string (quantidade de dígitos)
        int result = 0;

        // Percorre cada dígito da esquerda para a direita
        for (int i = 0; i < len; i++) {
            int digito = ACM[i] - '0';      // Converte caractere para número
            int pos = len - i;              // Posição do dígito da direita para esquerda (1-based)
            result += digito * fatorial(pos); // Soma o produto do dígito com seu fatorial
        }

        // Imprime o result convertido para decimal
        printf("%d\n", result);
    }

    return 0;
}

// Função que calcula o fatorial de um número inteiro
int fatorial(int n) 
{
    int resp = 1;
    for (int i = 2; i <= n; i++)
        resp *= i;
    return resp;
}