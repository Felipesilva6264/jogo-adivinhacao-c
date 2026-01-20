//jogo de advinhação

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	//Sorteio do numero aleatorio
	int x = rand() % 100;
	int y;

	printf("Adivinhe o numero: \n");
	scanf("%d", &y);
	while(x != y){
		if(x < y){
			printf("Não foi desta vez! tente novamente para menos:\n");
		}
		else {
			printf("Não foi desta vez! tente novamente para mais:\n");
		}
		scanf("%d", &y);
			
	}
	printf("Você acertouo, fim do jogo!\n");
	return 0;
}
