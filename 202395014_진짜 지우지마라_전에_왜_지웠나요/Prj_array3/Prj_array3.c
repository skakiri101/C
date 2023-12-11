#include <stdio.h>

int stringLength(char *str)
{
	int i=0, len=0;
	
	while(*(str+i) !='\0'){
		len++;
		i++;
	}
	return len;
}

void reverseString(char *str, int size){
	int i;
	for(i=size-1; i>=0; i--)
		printf("%c", *(str+i));
	printf("\n");
}

