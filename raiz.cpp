#include <stdio.h>
#include <math.h>

int main ()
{
	int	num;
	float	raiz;
	
	printf	("\nDigite um numero inteiro :");
	scanf	("%d", &num);
	if	(num % 2 == 0);
	{
		raiz = sqrt(num);
		printf	("\n A raiz quadrada e : %.3f", raiz);
		return (0);
	
	}
}
