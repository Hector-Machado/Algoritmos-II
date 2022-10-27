#include <stdio.h>
#include <locale.h>



int main(void){
setlocale(LC_ALL,"Portuguese");

	int i = 0, j =0;
	int v1[10];
	int v2[5] = {2,3,4,5,6};

 //  Leitura números do 1 vetor

	for(i = 0; i < 10; i++){
		scanf("%d", v1 + i);
	}
	
	for(i =0; i < 10;i++){
		int cont = 0;
		printf("\nDivisores de %d:", v1[i]);
			for(j = 0; j < 5;j++) {
				if ( v1[i] % v2[j] == 0) {
					printf(" %d", v2[j]);
				}else if(cont == 4){
					printf(" Não tem.");
				} else {
					cont++;
				}
			}
	}		
}
