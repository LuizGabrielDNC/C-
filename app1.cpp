#include <stdio.h>

int main(){
	float v1, v2, v3, v4, media;
	printf("Digite o primeiro valor ? \n");
	scanf("%d &v1");
	fflush(stdin);
	
	printf("Digite o segundo valor ? \n");
	scanf("%d &v2");
	fflush(stdin);
	
	printf("Digite o terceiro valor ? \n");
	scanf("%d &v3");
	fflush(stdin);
	
	printf("Digite o quarto valor ? \n");
	scanf("%d &v4");
	fflush(stdin);
	
	media=(v1+v2+v3+v4)/4;
	
	printf(" A media é : %d\n",media);
}
