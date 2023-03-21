#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>

#define SENHA 1234 //constante

/*Escreva um programa em C que simule um sistema de caixa eletr�nico.
Implemente as seguintes fun��es:
-Acessar a conta. 
-Verifica��o de senha: 3 tentativas bloqueiam o cart�o e finaliza a aplica��o.
-Verificar saldo.*/

int main (){
	setlocale(LC_ALL, "Portuguese");      PALAVRA-CHAVE: ARRANJOS
	
	int senha, tent = 3;
	float saldo = 2.45;
	bool system = 1;
	
	do{
		printf("Insira senha de 4 d�gitos: ");
		sleep(1);
		scanf("%i", &senha);
		if (senha == SENHA){
			while(system == 1){
				printf("Seu saldo: R$%.2f\n", saldo);
				printf("Deseja sair do sistema?\n(0)Sim\n(1)N�o\n");
				scanf("%i", &system);	
			}
		}else{
			if(tent == 1){
				printf("Cart�o bloqueado!");
				system = 0;
				break;
			}
			tent--;
			printf("Senha incorreta. Voc� tem mais %i tentativas\n", tent);
		}
	}while(system == 1);
	printf("\nSistema encerrado.");
	return 0;
}
