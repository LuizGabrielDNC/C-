#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct contatos{
	int codigo;
	char nome[30], telefone[15], email[35];
};


int main(){
	setlocale(LC_ALL,"Portuguese");
	int escolha, contador=0, i;
	struct contatos pessoa[5];
	do{
		printf("******AGENDA EM VERSÃO BETA ******\n");
		printf("Digite 1 para inserir novo cadastro \n");
		printf("Digite 2 para mostrar clientes cadastrados \n");
		printf("Digite 0 para encerrar .\n\n");
		scanf("%d", &escolha);
		fflush(stdin);
		system("cls");
	
		switch(escolha){
			case 1 :
				if(contador<=4){
					printf("Cadastro de contato \n");
					printf("***** Código : %d ****\n", contador);
					printf("Informe o nome : \n\n");
					fgets(pessoa[contador].nome, 30, stdin);
					fflush(stdin);
					printf("Informe o telefone: \n\n");
					fgets(pessoa[contador].telefone, 15, stdin);
					fflush(stdin);
					printf("Informe o e-mail :\n\n");
					fgets(pessoa[contador].email, 35, stdin);
					fflush(stdin);
					printf("\n");
					contador++;	
					system("pause");
					system("cls");
				}else{
					printf("Agenda lotada ! \n\n");
					system("pause");
					system("cls");
				}
				
			break;
			case 2: 
				if(contador==0){
					printf("Agenda vazia ! \n\n ");
					system("pause");
					system("cls");
					
				}else{
					
					printf("Lista de contatos \n\n");
					for(i=0;i<contador;i++){
						printf("****  Código %d  ****\n", i);
						printf("Nome : %s", pessoa[i].nome);
						printf("Telefone : %s", pessoa[i].telefone);
						printf("e-mail : %s\n", pessoa[i].email);
						printf("**************************************\n");
						
						
					}
				}
			break;
			case 0 :
				printf("Encerramento do programa\n ");
			break;
			default:
				printf("Opção invalida \n\n");
				system("pause");
				system("cls");
		}
		
		
	}while(escolha != 0);
	
	return(0);
	
}
