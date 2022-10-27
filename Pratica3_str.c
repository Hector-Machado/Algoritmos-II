#include <stdio.h>


int main (void){
	
	int i =0, j =0, n =0;
	char v2[61];
	
	
	
	scanf("%d", &n);
	
	int v1[n];
	
		for( i = 0; i < n; i++){
			scanf("%d", v1 + i);
		}
		
		fflush(stdin);
		
		gets(v2);
		
		for(i =0; i < n; i ++){
			for(j =0; v2[j] != '\0'; j++){
				if (j == v1[i]){
					printf("%c", v2[j] );
				}
			}
		}
		
		return 0;
	}
	
