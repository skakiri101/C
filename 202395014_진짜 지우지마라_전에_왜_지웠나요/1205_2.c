#include <stdio.h>
#include <string.h>
#include <ctype.h>

//202395014 Nam Taeho

int main()
{
	char books[100];
	int i = 0;
	
	printf("Please enter? ");
	gets(books);
	
	while (books[i] != '\0'){
		if (islower(books[i]))
			books[i] = toupper(books[i]);
		else
			books[i] = tolower(books[i]);
		i++;
	}
		
	printf("change after: %s", books);
}
