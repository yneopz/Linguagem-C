#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[5], vet1[5];
	int i;
	
	printf("Insira elementos do primeiro vetor:\n");
	for(i = 0; i < 5; i++){
		scanf("%i", &vet[i]);
	}
	
	printf("Insira elementos do segundo vetor:\n");
	for(i = 0; i < 5; i++){
		scanf("%i", &vet1[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf("%i ", vet[i]+vet1[i]);
	}
	return 0;
}
