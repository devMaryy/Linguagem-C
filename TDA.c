// Beecrowd  1022

#include <stdio.h>
#include <stdlib.h>

int mdc(int m, int n) {
    /* Retorna o Máximo Divisor Comum de m e n */
    if (m < 0) m = -m;
    if (n < 0) n = -n;

    if (m % n == 0)
        return n;
    else
        return mdc(n, m % n);
}

int main(void) {
    int N;
    scanf("%d", &N);

    while (N--) {
        int n1, d1, n2, d2, rn = 0, rd = 0;
        char op, slash;

        // Exemplo da entrada: 1 / 2 + 3 / 4
        scanf("%d %c %d %c %d %c %d", &n1, &slash, &d1, &op, &n2, &slash, &d2);

        // Operações com if/else
        if (op == '+') {
            rn = n1 * d2 + n2 * d1;
            rd = d1 * d2;
        } 
        else if (op == '-') {
            rn = n1 * d2 - n2 * d1;
            rd = d1 * d2;
        } 
        else if (op == '*') {
            rn = n1 * n2;
            rd = d1 * d2;
        } 
        else if (op == '/') {
            rn = n1 * d2;
            rd = n2 * d1;
        }

        // Simplificação
        int divisor = mdc(rn, rd);  // Usando a função mdc para simplificar
        int sn = rn / divisor;
        int sd = rd / divisor;

        // Imprime a fração original e a simplificada
        printf("%d/%d = %d/%d\n", rn, rd, sn, sd);
    }

    return 0;
}
