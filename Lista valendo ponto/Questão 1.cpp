#include <stdio.h>
#include <locale.h>
#define TMAX 5

int main() { 
	setlocale(LC_ALL, "Portuguese_Brazil");
	int valores[TMAX];
	int *ponteiro;

	for(int i=0; i<TMAX; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	ponteiro = valores;
	
	
	for(int indice=0; indice<TMAX; indice++){
		printf("\nValores:%d", *(ponteiro + indice));
	}
	printf("\n");
	for(int j=0; j<TMAX; j++){
		printf("\nEndereços: %p", (ponteiro + 1));
	}
	
	return 0;
}
