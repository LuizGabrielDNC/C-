#include <stdio.h>
#include <math.h>
int main ()
{
	int quadrado, num;
	float raiz;
	
	printf("Digite um numero inteiro ");
	scanf("%d", &num);
	if(num % 2==0){
		raiz = sqrt(num);
		printf(" numero e par ");
		printf("A raiz quadrada de %d e %.3f", num, raiz);
	}
	return(0);
	
}
