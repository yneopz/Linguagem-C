#include <stdio.h>

int main(){
	int i, maior = 0, vet[5];
	
	for(i = 0; i < 5; i++){
		scanf("%i", &vet[i]);
		if(vet[i] > maior) maior = vet [i];
	}
	
	printf("O maior valor é: %i", maior);
	
	return 0;
}
