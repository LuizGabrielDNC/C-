#include <stdio.h>
int main()
{
	int pedido,dia,mes,ano,quantidade;
	float preco_unit,preco_total;
	pedido=1;preco_total=0;
	while(pedido !=0)
	{
		printf("Digite o numero do pedido : ");
		scanf("%d",&pedido);
		if(pedido !=0)
		{
			printf("Digite o dia do pedido : \n");
			scanf("%d", &dia);
			printf("%d", &mes);
			printf("\nDigite o ano do pedido :\n");
			scanf("%d",&ano);
			printf("\nDigite o preco unitario :\n");
			scanf("%f",&preco_unit);
			printf("\nDigite a quantidade do pedido : \n");
			scanf("%d",&quantidade);
			preco_total= preco_total + preco_unit*quantidade;
			
		}
	}
	printf("O preco total dos pedidos e : %.2f\n", preco_total);

}
