#include <stdio.h>
#include <math.h>

int main (void) 
{
    int D, VF, VG;

    // Lê os casos de teste até o final do arquivo (EOF)
    while (scanf("%d %d %d", &D, &VF, &VG) != EOF) 
    {
        // Tempo do fugitivo = 12 / VF
        double tempoFugitivo = 12.0 / VF;

        // Distância da Guarda Costeira
        double distanciaGuarda = sqrt(D * D + 12 * 12);
        // Tempo da Guarda Costeira = distância / VG
        double tempoGuarda = distanciaGuarda / VG;

        // Verifica se a Guarda pode alcançar o fugitivo
        if (tempoGuarda <= tempoFugitivo)
            printf("S\n");
        else
            printf("N\n");
    }

    return 0;
}