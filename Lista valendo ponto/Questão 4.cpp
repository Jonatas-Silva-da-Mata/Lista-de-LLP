#include <stdio.h>

int main() {
	int valor;
	int *ponteiro;
	
	printf("Digite quantos valores deseja utilizar: ");
	scanf("%d", &valor);
	
	int vetor[valor];
	printf("\n");
	for(int i=0; i<valor; i++){
		printf("Digite o %dº valor: ", i+1 );
		scanf("%d", &vetor[i]);
	}
	
	ponteiro = vetor;
	printf("\nResultado\n");
	for(int j=(valor-1); j>=0; j--){
		printf("%d", *(ponteiro + j));
	}
	
	return 0;
}
