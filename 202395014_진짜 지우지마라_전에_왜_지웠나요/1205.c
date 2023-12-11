#include <stdio.h>
#include <string.h> 
#include <ctype.h>

//202395014

int main()
{
	char books[5][30];
	int i = 0;
	
	for (i=0; i<5; i++){
		printf("Please enter : ");
		gets(books[i]);
	}
	
	for (i=0; i<5; i++)
			printf("%s\n", books[i]);
	
	for (i=0; i<5; i++){
		if (islower(books[i][0]))
			books[i][0] = toupper(books[i][0]);
	}
	
	puts("<< change after >>");
	for (i=0; i<5; i++)
		printf("%s\n", books[i]);
}
