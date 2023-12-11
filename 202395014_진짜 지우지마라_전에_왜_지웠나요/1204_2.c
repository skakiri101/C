#include <stdio.h>
#include <string.h>

//202395014

int count_space(const char* s)
{
	int count = 0;
	while (*s != '\0') {
		if (isspace(*s))
			count++;
		s++;
	}
	
	return count;
}

int main()
{
	char str[64] = "this program tests const pointer to string.";
	
	puts(str);
	printf("number of space characters: %d\n", count_space(str));
}


