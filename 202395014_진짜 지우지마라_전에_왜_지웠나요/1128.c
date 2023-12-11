#include <stdio.h>

//202395014 컴퓨터공학부 남태호

int main()
{
	char sentence[100] = "";
	char word[20];
	do {
		printf("단어? ");
		scanf("%s", word);
		strcat(sentence, word);
		strcat(sentence, " ");
	} while (strcmp(word, ".") != 0);
	
	printf("%s\n", sentence);
} 
