#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct contatos{
	int codigo;
	char nome[30], telefone[15], email[35];
};


int main(){
	int escolha, contador=1;
	struct contatos pessoa[5];
	do{
		printf("Digite 1 para inserir novo cadastro \n");
		printf("Digite 2 para mostrar clientes cadastrados \n");
		printf("Digite 0 para encerrar .\n\n");
		scanf("%d", &escolha);
		fflush(stdin);
	
		switch(escolha){
			case 1 :
				printf("Cadastro de contato \n");
				printf("Código : %d\n", contador);
				printf("Informe o nome : \n");
				fgets(pessoa[contador].nome, 30, stdin);
				fflush(stdin);
				printf("Informe o telefone: \n");
				fgets(pessoa[contador].telefone, 15, stdin);
				fflush(stdin);
				printf("Informe o e-mail :\n");
				fgets(pessoa[contador].email, 35, stdin);
				fflush(stdin);
				contador++;
			break;
			case 2: 
				printf("Lista de contatos");
			break;
			case 0 :
				printf("Encerramento do programa ");
			break;
			default:
				printf("Opção invalida");
		}
		
		
	}while(escolha != 0);
	
	
	return(0);
}
