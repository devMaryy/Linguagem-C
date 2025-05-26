// Beecrowd 1936

#include <stdio.h>

int main (void) 
{
    int N;
    scanf("%d", &N); 

    int f[11]; 
    f[0] = 1; 

    for (int i = 1; i <= 10; i++) 
    {
        f[i] = f[i - 1] * i; 
    }

    int k = 0; 

    for (int i = 10; i >= 1; i--) 
    {
        while (N >= f[i]) 
        { 
            N -= f[i];
            k++;       
        }
    }

    printf("%d\n", k); 

    return 0;
}
