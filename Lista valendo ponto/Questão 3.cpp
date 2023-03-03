#include <stdio.h>

int main(){
	int var1, var2;
	int *p1,*p2;
	
	printf("Digite o primeiro valor inteiro: ");
	scanf("%d", &var1);
	printf("Digite o segundo valor inteiro: ");
	scanf("%d", &var2);
	
	p1 = &var1;
	p2 = &var2;
	
	*p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
	
	
	printf("Valor de %d e %d", *p1, *p2);
	
	return 0;
}
