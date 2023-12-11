#include <stdio.h>
#include <string.h>
#include "Prj_array3.h"

//202395014 컴퓨터공학부 남태호

int main()
{	
	int len;
	
	char sentence[100] = "";
	char word[20];
	
	do {
		printf("단어? ");
		scanf("%s", word);
		strcat(sentence, word);
		strcat(sentence, " ");
	} while (strcmp(word, ".") != 0);
	
	printf("입력받은 문자열 : %s, 문자열 길이 : %d\n", sentence, strlen(sentence));
	
	printf("문자열 길이(함수 사용) : %d\n", stringLength(sentence));
	
	len=stringLength(sentence);
	reverseString(sentence, len);
	
} 

