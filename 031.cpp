#include <stdio.h>
int main()
{
	float nota, soma, media;
	int cod, i, nnota, naprovado, nreprovado;
	
	naprovado=0;
	nreprovado=0;
	printf("informe o numero de notas da disciplina : \n");
	scanf("%d", &nnota);
	do
	{
		printf("Informe o codigo do aluno:\n");
		scanf("%d", &cod);
		soma = 0;
		if (cod != 0)
		{
			for(i=1; i<=nnota; i++)
			{
				printf("Informe a %d nota do aluno : \n", i);
				scanf("%f", &nota);
				soma = soma+ nota;
				
			}
		media = soma/nnota;
		if(media >=6)
			naprovado ++;
		else
			nreprovado ++;
		}
	}
	while (cod!=0);
	printf("oo numero de aprovados e : %d\n", naprovado);
	printf("O numero de reprovados e : %d\n", nreprovado);
	return(0);
}
		
	

