#include <stdio.h>
#include <locale.h>



int main(void){
setlocale(LC_ALL,"Portuguese");

	int i = 0, j =0;
	int v1[10];
	int v2[10];

 //  Leitura números do 1 vetor

	for(i = 0; i < 10; i++){
		scanf("%d", v1 + i);
	}
	
	 //  Leitura números do 2 vetor
	 
	 	for(j = 0; j < 10; j++){
		scanf("%d", v2 + j);
	}
	
	for(j =0; j < 10;j++){
			for(i = 0; i < 10;i++) {
				printf("%d ", v1[i]);			
				if(v2[j] != v1[i]){
					printf("%d ", v2[j]);			
				}
			}
	}
}		
