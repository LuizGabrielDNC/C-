#include <stdio.h>
int main()
{
	int s, soma;
	#define max 10
	printf("Digite sua idade :");
	scanf("%d", &s);
	soma=s-max;
	printf("A soma e %d", soma);
}
