#include <stdio.h>

int main() {
	float valor, dobro;
	float *ponteiro;
	
	printf("Digite o valor que desejas: ");
	scanf("%f", &valor);
	
	ponteiro = &valor;	
	dobro = *ponteiro *2;
	
	printf("Valor informado: %.2f\n", *ponteiro);	
	printf("Valor duplicado: %.2f", dobro);
	
	return 0;
}
