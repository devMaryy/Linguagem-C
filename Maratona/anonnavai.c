#include <stdio.h>

int main ()
{
	int q = 0, cont =0;
	scanf("%d\n", &q);
	
	while (cont < q)
	{	
		int num1, num2;
	
		scanf("%d %d", &num1, &num2);
	
		if(num1 > num2)
		{
			if(num1 + num2 > 40)
			{	
				printf("DOROTHY DECIDE E A NONNA VAI\n");
			}	
			
			else
			{	
				printf("DOROTHY DECIDE\n");
			}	

		}
		else  
		{
			if(num1 + num2 > 40)
			{	
				printf("DAGMAR DECIDE E A NONNA VAI\n");
			}	
			
			else
			{	
				printf("DAGMAR DECIDE\n");
			}	

		}
	cont ++;
	}
}