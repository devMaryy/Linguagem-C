#include <stdio.h>

int main ()
{
	int n = 0, cont =0;
	scanf("%d", &n);
	
	while (cont < n)
	{	
		int p;
		float t, u;
	
		scanf("%f %f %d", &t, &u, &p);
	
		if(p == 1)
		{
			printf("NAO REGAR\n");

		}
		else  
		{
			if(t > 30.0 && u < 50.0)
			{
				printf("REGAR\n");

			}
					
			else
			{
				printf("NAO REGAR\n");
			}
		}
	cont ++;
	}
}