#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale(LC_ALL,"Portuguese");
	int n = 0, i = 0, numero_acima = 0;
	float media = 0.0;
	
	printf("Quantas notas são? \n");
	scanf("%d",&n);
	
	float nota[n];
	printf("Quais foram as notas? \n");
	for(i = 0; i < n; i ++){
		scanf("%f", nota + i);
		media += nota[i];
	}
	
	media = media/n;
	
	
	printf("A média é %.2f \n", media);
	
	for(i = 0; i < n; i++){
		if(nota[i] > media){
			numero_acima += 1;
		}
	}
	
	printf ("Notas acima da média = %d", numero_acima);
	return 0;
	
}


