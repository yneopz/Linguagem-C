#include <stdio.h>

#define TAM 5
int main (){
	int i, namjoon[TAM], hoseok[TAM], yoongi[TAM];
	
		//Notas de Namjoon
		for(i = 0; i < TAM; i++){
        	printf("Insira nota %i de Namjoon: ", i+1);
			scanf("%i", &namjoon[i]);
    	}
    	//Notas de Hoseok
    	for(i = 0; i < TAM; i++){
        	printf("Insira nota %i de Hoseok: ", i+1);
			scanf("%i", &hoseok[i]);
    	}
    	//Notas de Yoongi
    	for(i = 0; i < TAM; i++){
        	printf("Insira nota %i de Yoongi: ", i+1);
			scanf("%i", &yoongi[i]);
    	}
    	//Impressão das notas
    	printf("\nNamjoon: ");
    	for(i = 0; i < TAM; i++){
        	printf("%i\t", namjoon[i]);
    	}
    	printf("\nHoseok: ");
    	for(i = 0; i < TAM; i++){
        	printf("%i\t", hoseok[i]);
    	}
    	printf("\nYoongi: ");
    	for(i = 0; i < TAM; i++){
        	printf("%i\t", yoongi[i]);
    	}

	return 0;
}
