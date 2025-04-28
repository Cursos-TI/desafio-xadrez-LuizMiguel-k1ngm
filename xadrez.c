#include <stdio.h>




int main() {
	int i;
	//movimento da torre
	printf("Movimento da torre: \n");
	for(i= 1; i <=5; i++){
		printf("Casa %d: direita \n", i);
	}
	
	printf("--------------------------------------------------------------------\n");
	
	//movimento do bispo
	
printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }
	
	
	printf("--------------------------------------------------------------------\n");
	
	
	
// movimento da rainha 
printf("Movimento da rainha\n");
i = 1;

do{
	printf("Casa %d: esquerda\n", i);
	i++;
} while(i<=8);
	
	

	
	
	
	
	return 0;
}
