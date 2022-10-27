#include <stdio.h>

int main (void){
	
	int n = 0, i = 0;
	
		scanf("%d", &n);
		
	float v1[n], x = 0;
	
	for(i = 0; i < n; i ++){
		scanf("%f", v1 + i);
	}
	
	scanf("%f", &x);
	
	for(i = 0; i < n; i++){
		if(v1[i] < x){
			printf("V[%d] = %.2f\n",i,v1[i]);
		}
	}
	
	return 0;
	
}
