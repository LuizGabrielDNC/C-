#include <stdio.h>
int main()
{
	int op;
	float total;
	
	total =0;
	printf("1 - italiano 2 - japones 3 - salvadorenho \n");
	printf("Informe o prato desejado : \n");
	scanf("%d", &op);
	switch (op)
	{
	case  1 :total = total + 750;
		break;
	case 2 :total = total + 324;
		break;
	case 3:total = total + 545;
		break;
	default :
		printf("Nada escolhido");
		break;
	}
	printf("1 - Cha 2 - suco de laranja 3 - refrigerante : \n");
	printf("Informe a bebida de sua escolha : \n");
	scanf("%d", &op);
	switch (op)
	{
	case 1 : total = total + 30 ;
		break;
	case 2 : total = total + 80;
		break;
	case 3 : total = total + 90 ;
		break;
	}
	printf(" O total de calorias : %.2f \n", total);
}
	
	

