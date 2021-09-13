#include <stdio.h>
int main()
{
	int i;
	char nome[30];
	
	printf("Informe o nome : \n");
	scanf("%s", nome );
	i=0;
	do
	{
		printf("\n%d -- %s",i,nome);
		i++;
	}
	while(i!=10);
}
