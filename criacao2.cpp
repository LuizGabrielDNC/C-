#include <stdio.h>
int main()
{
	float nota;
	
	printf("Digite sua nota : ");
	scanf("%f", &nota);
	if(nota< 7)
	{
		printf("Voce reprovou mais sorte na proxima");
	}
	else
	{
		printf("Voce passou de materia *******");
	}
}
