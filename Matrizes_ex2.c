#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n =0, i = 0, j= 0;
	
	printf("Digite a ordem da matriz:");
	scanf("%d", &n);
	
	int matrix [n][n];
	
	printf("Digite a matriz:\n");
	
	// Lendo a matriz inteira
	
	for(i =0; i < n; i++){
		for(j = 0; j < n; j++){
		scanf("%d", &matrix[i][j]);	
		}	
	}
	
		printf("\nMATRIZ:\n\n");
	
	// Printando a matriz inteira	
	
	for(i =0; i < n; i++){
		for(j = 0; j < n; j++){
		printf("%d ", matrix[i][j]);	
		}
		printf("\n");
	}
	
		printf("\nDIAGONAL SECUNDÁRIA :\n\n");
	
	// Printando apenas a diagonal secundária da matriz
	
	for(i =0; i < n; i++){
		for(j = 0; j < n; j++){
			if((i + j) == (n - 1) ){
				printf("%d ", matrix[i][j]);	
			
			} 	else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
