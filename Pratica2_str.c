#include <stdio.h>

int main (void){
	
	char v1[257];
	int i =0;
	
	fflush(stdin);
	
	gets(v1);
	
	for(i = 0; v1[i] != '\0'; i++){
		if (v1[i] == 'z'){
			v1[i] -= 57;
		}
		else if (v1[i] != ' '){
			v1[i] -= 31;
		}
	}
	puts(v1);
	return 0;
}
