#include <stdio.h>
int main()
{
	int idade ;
	printf("Informe a idade : ");
	scanf("%d", &idade);
	if(idade < 16)
	{
		printf("\nNão eleitor");
		
	}
	else
	{
		if((idade <18) || (idade >65))
		{
			
		
		
			printf("\nEleitor facultativo ");
			
		}
		else
		{
			printf("Eleitor obrigatorio");
		}
	}
}
