#include<stdio.h>
int main()
{
	int matriz[2][10];
	int i,j;
	for (i=0;i<2;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("Insira o elemento da linha %d ,clonua %d ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for (i=0;i<2;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("o elemnto da linha %d coluna %d e : %d",i,j,matriz[i][j]);
		}
	}
}
