#include <stdio.h>
#include <math.h>
int main ()
{
	int quadrado, num;
	float raiz;
	
	printf("\nDigite um numero inteiro ");
	scanf("%d", &num);
	if(num % 2==0){
		raiz = sqrt(num);
		printf(" \nnumero e par ");
		printf("\nA raiz quadrada de %d e %.3f", num, raiz);
	}
	else
	{
		quadrado= num *num;
		printf("O numero e impar e o quadrado e :  %d", quadrado);
	}
	return (0);
}
