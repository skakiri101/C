#include <stdio.h>
#include <string.h>
#include "Prj_array3.h"

//202395014 ��ǻ�Ͱ��к� ����ȣ

int main()
{	
	int len;
	
	char sentence[100] = "";
	char word[20];
	
	do {
		printf("�ܾ�? ");
		scanf("%s", word);
		strcat(sentence, word);
		strcat(sentence, " ");
	} while (strcmp(word, ".") != 0);
	
	printf("�Է¹��� ���ڿ� : %s, ���ڿ� ���� : %d\n", sentence, strlen(sentence));
	
	printf("���ڿ� ����(�Լ� ���) : %d\n", stringLength(sentence));
	
	len=stringLength(sentence);
	reverseString(sentence, len);
	
} 

