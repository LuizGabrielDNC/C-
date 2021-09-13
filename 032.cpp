#include <stdio.h>
int main()
{
	int num,i, fat;
	printf("INforme o numero : \n");
	scanf("%d", &num);
	fat = 1;
	for(i=1; i<= num ; i++)
		fat = fat *i;
	printf(" Ofatoral e : %d\n", fat);
	return(0);
}
