#include <stdio.h>
int main(){
	#define TAM 5
	int a, b;
	printf("Digite o valor do numero desejado?");
	scanf("%d", &a);
	b=TAM+a;
	printf("%d", b);
}
