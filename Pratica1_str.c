#include <stdio.h>

 int main(void){
	
	int i = 0;
	char v1[30];
	
	fflush(stdin);
	
	gets(v1);
	
	for(i = 0; v1[i] != '\0'; i++){
		if(v1[i] == 'a'|| v1[i] == 'e'|| v1[i] == 'i'|| v1[i] == 'o'|| v1[i] == 'u'|| v1[i] == 'A'|| v1[i] == 'E'|| v1[i] == 'I'|| v1[i] == 'O'|| v1[i] == 'U'){
			v1[i] = '_';
		}
	}	puts(v1);
	return 0;
 }


