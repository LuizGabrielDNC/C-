#include<stdio.h>
#include <stdlib.h>

int main ()
{
	int op,s;
	
	
	printf("\nDigite sua op��o :\n1--entrar\n2--sair \n");
	scanf("%d", &op);
	fflush(stdin);
	if(op==1)
	{
		printf("Bem vindo ao menu do MPSP ..");
		printf("\nDigite a senha de acesso : ");
		scanf("%d", &s);
		fflush(stdin);
		if(s==9089)
		{
			printf("\Acesso liberado as fun�oes  .");
		}
		else
		{
			printf("\nsenha invalida ");
		}
	}
	
	
	
}

