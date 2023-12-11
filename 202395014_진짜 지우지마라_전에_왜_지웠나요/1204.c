#include <stdio.h>
#include <string.h>

//202395014

int main()
{
	char str_in[128];
	char str_out[128];
	int year, month, day;
	
	printf("DAY(yyyymmdd)? ");
	gets(str_in);
	
	sscanf(str_in, "%4d%2d%2d", &year, &month, &day);
	
	sprintf(str_out, "Due Date: %04d-%02d-%02d", year, month, day);
	puts(str_out);	
} 
