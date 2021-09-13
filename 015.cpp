#include <stdio.h>
int main()
{
	char nome[30];
	int idade;
	
	printf("INFORME O NOME : \n");
	scanf("%s", nome);
	printf("INFORME SUA IDADE : \n");
	scanf("%d", &idade);
	
	printf("Nome : %s\n", nome);
	printf("idade : %d\n", idade);
	if(idade<=18)
	{
		printf("O valor do plano e : R$ 50,00\n");
	}
		else
		{
			if((idade >=19 )  && (idade<=29))
			{
					printf("O valor do plano : R$ 70,00\n ");
		    }
			else
			{
			
				if((idade >=30) && (idade <= 45))
				{
						printf("O valor do plano e : R$ 90,00\n");
			    }
				else
				{
					if((idade >=46) && (idade<=65))
				{
					printf("o valor do plano e: R$ 130,00\n");
					
			    }
			    else
			    {
			    	printf("o valor do plano e : R$ 170,00 \n");
			    }
		    }
	    }
    }
}
				
				
						
	    

