#include <stdio.h>
int main()
{
	int cargo;
	float salario, aumento, salario_final;
	printf("Digite o numero do cargo do funcionario : \n");
	scanf("%d", &cargo);
	printf("Digite o valor do salario do funcionario \n");
	scanf("%f", &salario);
	switch(cargo){
		case 1: 
		aumento= salario *0.4;
		salario_final= salario + aumento;
		printf("O servente teve aumento deR$%.2f e agora recebe R$ %.2f\n", aumento, salario_final);
		break;
		case 2:
		aumento= salario *0.35;
		salario_final= salario + aumento;
		printf("O pedreiro teve aumento deR$%.2f e agora recebe R$ %.2f\n", aumento, salario_final);
		break;	
		case 3:
			aumento= salario *0.20;
		salario_final= salario + aumento;
		printf("O mestre de obras teve aumento deR$%.2f e agora recebe R$ %.2f\n", aumento, salario_final);
		break;
		case 4:
		aumento= salario *0.10;
		salario_final= salario + aumento;
		printf("O tecnico de seguranca teve aumento deR$%.2f e agora recebe R$ %.2f\n", aumento, salario_final);
		break;
		
		default:
			printf("cargo nao identificado ");
		break;
	}
	return(0);
}
