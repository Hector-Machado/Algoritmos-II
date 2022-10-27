#include <stdio.h>

int main (void){
	
	int n = 0, i = 0;
	
	scanf("%d", &n);
	
	int v1[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", v1 + i );	
	}
	
	for(i = 0; i < n; i ++){
		if(v1[i] % 2 == 0) {
			printf("v[%d] = %d\n", i,v1[i]);
		}
	}
}
	
