#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade, i;
	printf("Digite sua idade :");
	scanf("%d", &idade);
	fflush(stdin);
	system ("pause");
	system("cls");
	i=2020-idade;
	printf("meu ano de nascimento e : %d", i);
	}
