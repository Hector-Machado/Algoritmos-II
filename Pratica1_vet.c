#include <stdio.h>

int main (void){
	
	int n = 0, i = 0;
	
	scanf("%d", &n);
	
	double v1[n];
	
	for(i = 0; i < n; i++){
		scanf("%lf", v1 + i );	
	}
	
	for(i = 0; i < n; i ++){
		printf("v[%d] = %.1lf\n", i,v1[i]);
	}
	
	for((i = n - 1); i >= 0; i --){
		printf("v[%d] = %.1lf\n", i,v1[i]);
	}
	
	return 0;
}
