#include <stdio.h>
int main () 
{
	int par, impar, num;
	par=0;
	impar = 0;
	do
	{
		printf(" Informe o numero :\n");
		scanf("%d", &num);
		if(num % 2 == 0)
			par++;
		else
			impar++;
	}
	while (num != 0);
	printf(" par e :%d\n", par);
	printf(" impar e :%d\n", impar);
	return (0);
}

