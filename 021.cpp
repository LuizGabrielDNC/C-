#include <stdio.h>
int main()
{
	int num;
	printf("Informe o numero : \n");
	scanf("%d", &num);
	if(num % 5 ==0)
	{
		printf(" o numero %d e divisivel por 5 \n", num);
	}
	else
	{
		printf(" o numero %d nao e divisivel por 5", num);
	}
}
