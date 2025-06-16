#include <stdio.h>

/**
 * main - use sizeof to measure the size of types
 * Return: 0
 */
int main(void)
{
/* Declare char and size variables in arrays */
const char *types_array[5] = {
"char",
"int",
"long int",
"long long int",
"float"
};
int size_array[5] = {
sizeof(char),
sizeof(int),
sizeof(long int),
sizeof(long long int),
sizeof(float)
};
int i;

/* Print outcome */
for (i = 0; i < 5; i++)
{
if (i == 1)
{
printf("Size of an %s: %zu byte(s)\n", types_array[i], size_array[i]);
}
else
printf("Size of a %s: %zu byte(s)\n", types_array[i], size_array[i]);
}

return (0);
}
