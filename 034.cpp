#include<stdio.h>
int main()
{
	int num, i,qdade;
	printf("Informe o numero :\n");
	scanf("%d", &num);
	qdade = 0;
	for(i=1 ; i<=num; i++)
	{
		if(num % i ==0)
			qdade++;
	}
	if(qdade==2)
		printf("O numero e primo \n");
	else
		printf("Nao e primo \n"); 
	return(0);
}
