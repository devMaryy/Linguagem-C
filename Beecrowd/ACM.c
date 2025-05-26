// Beecrowd 1429
#include <stdio.h>
#include <string.h>

int fatorial(int n); 

int main (void) 
{
    char ACM[10]; 

    while (1) {
        scanf("%s", ACM);

        if (strcmp(ACM, "0") == 0)
            break;

        int len = strlen(ACM); 
        int result = 0;

        for (int i = 0; i < len; i++) {
            int digito = ACM[i] - '0';      
            int pos = len - i;         
            result += digito * fatorial(pos);
        }

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
