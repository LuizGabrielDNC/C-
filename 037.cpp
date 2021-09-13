#include<stdio.h>
int main()
{
	int idade, npessoas, npessoasi;
	int npessoass, opiniao;
	float somai, media;
	npessoas=0;
	npessoass=0;
	npessoasi=0;
	somai=0;
	printf("Informe  a idade : \n");
	scanf("%d", &idade);
	
	while(idade !=0)
	{
		do
		{
			printf("Informe a opiniao :\n");
			scanf("%d", &opiniao);
		}while((opiniao !=1)  && (opiniao !=2) &&(opiniao !=3));
		npessoas++;
		if(opiniao ==1)
		{
			somai=somai+idade;
			npessoass++;	
		}
		else
		{
			if(opiniao==3)
			npessoasi++;
			
		}
		printf("Informe a idade :\n ");
		scanf("%d", &idade);
	}
	media= (somai/npessoass);
	printf("O numero de pessoas insatisfeitas e : %d\n", npessoasi);
	printf("O numero de pessoas satisfeitas e : %d\n", npessoass);
	printf("A media de idade das pessoas satisfeitas e : %2.f\n", media);
	return(0);
}
