#include <stdio.h>
int main(){
	int cod_estado, peso, cod_carga;
	float imposto, taxa_imp, preco_quilo, total, preco;
	
	printf("Digite o codigo do estado: \n");
	scanf("%d", &cod_estado);
	printf("dIGITE O PESO DA CARGA EM TONELADAS : \n");
	scanf("%d", &peso);
	printf("Digite o codigo da carga : \n");
	scanf("%d", &cod_carga);
	
	switch(cod_estado){
		case 1:
			taxa_imp= 0.2;
			break;
		case 2:
			taxa_imp= 0.15;
			break;	
		case 3:
			taxa_imp= 0.1;
			break;
		case 4:
			taxa_imp= 0.05;
			break;
		default:
			taxa_imp=0;
			printf("\nCodigo de estado invalido \n");
			break;
	}
	if(cod_carga>=10 && cod_carga <=20)
	{
		preco_quilo = 180;
	}
	else if(cod_carga>=21 && cod_carga <=30)
	{
		preco_quilo= 120;
	}
		else if(cod_carga>=31&&cod_carga <= 40)
	{
		preco_quilo= 230;
	}
	else{
		printf("\ncodigo de carga invalido");
		preco_quilo=0;
	}
	
	imposto = peso * 1000 * preco_quilo* taxa_imp;
	preco= peso*1000*preco_quilo;
	total=preco + imposto;
	
	printf("\n PESO EM KG : %d\nPRECO : %.2f\nIMPOSTO:%.2f\nTOTAL:%2.f", peso*1000, preco, imposto, total);
	
	}

