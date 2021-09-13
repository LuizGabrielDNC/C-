#include <stdio.h>
#include<math.h>
int main()
{
	int num;
	
	printf("Digite o numero : ");
	scanf("%d",& num);
	if(num % 3 == 0)
	printf("\no NUMERO E DIVISIVEL POR 3 .");
    if(num % 7 == 0)
    printf("\nO numero e divisivel por 7.");
}
