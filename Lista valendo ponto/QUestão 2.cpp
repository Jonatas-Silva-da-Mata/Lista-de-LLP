#include <stdio.h>

int main(){
	char frase_original[50];
	char frase_sem_vogais[50];
	char *ponteiro1;
	char *ponteiro2;
	
	printf("Digite uma palavra: ");
	scanf("%s", &frase_original);
	
	ponteiro1 = frase_original;
	ponteiro2 = frase_sem_vogais;
	
	
	for(int i=0; i<50; i++){
		if(*ponteiro1 == 'a' || *ponteiro1 == 'e' || *ponteiro1 == 'i' || *ponteiro1 == 'o' || *ponteiro1 == 'u'||
			 *ponteiro1 == 'A' || *ponteiro1 == 'E' || *ponteiro1 == 'I' || *ponteiro1 == 'O' || *ponteiro1 == 'U'){
			*ponteiro1++;
			continue;
	}
	*ponteiro2 = *ponteiro1;
	ponteiro1++;// ++pra continuar
	ponteiro2++;
}
	printf("%s", frase_sem_vogais);
	
	return 0;	
}
