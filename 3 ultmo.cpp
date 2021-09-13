#include <stdio.h>
int main()
{
	int num;
	printf("Digite um numero : \n");
	scanf("%d", &num);
	switch (num)
	{
		case 1 :
		printf("Janeiro ");
		break;
		case 2 :
		printf("FEVEREIRO ");
		break;
		case 3 :
		printf("MARÇO ");
		break;
		default :
		printf("MEs invalido no sistema ");
		break;
	}
}
