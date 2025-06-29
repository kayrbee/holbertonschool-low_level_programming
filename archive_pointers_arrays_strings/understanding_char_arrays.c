#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	int length = 0;
	int count = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	printf("Length: %d\n", length);
	
	length = length - 1;

	while (count <= length)
	{
		printf("%c <==> %c\n", s[count], s[length - count]); 
		count++;
	}
	printf("\n");
}
