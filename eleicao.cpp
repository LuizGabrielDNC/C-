#include <stdio.h>
#include <math.h>
int main()
{
	int numero,soma,quantidade,maior,menor,pares;
	int impares;
	float media;
	numero =1;
	quantidade =0;
	soma=0;
	maior=0;
	menor=HUGE_VAL;
	pares =0;
	impares=0;
	while (numero !=0)
	{
		printf("\nDigite um numero : \n");
		scanf("%d", &numero);
		if(numero !=0)
		   quantidades++;
		soma = soma +numero;
		if(numero % 2==0 && numero !=0)
		   pares++;
		else if(numero % 2 == 1 && numero !=0)
		   impares++;
		if(numero > maior && numero !=0)
		   maior = numero;
		if(numero < menor && numero !=0)
		   menor = numero;
		   
	}
	media = soma / quantidade;
	printf("\nMédia : %.2f \nmaior :%d \nMenor : %d\nPares : %d \nimpares : %d\n",media,maior,menor,pares,impares);
	
}
