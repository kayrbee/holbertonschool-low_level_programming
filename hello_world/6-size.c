#include <stdio.h>

/**
 * main - use sizeof to measure the size of types
 * Return: 0
 */
int main(void)
{
/* Declare char and size variables in arrays */
const char *types_array[5] = {"char", "int", "long int", "long long int", "float"};
int size_array[5] = {1, 4, 4, 8, 4};

/* Print outcome */
for (int i = 0; i < 5; i++)
{
if (i == 1)
{
printf("Size of an %s: %d byte(s)\n", types_array[i], size_array[i]);
}
else
printf("Size of a %s: %d byte(s)\n", types_array[i], size_array[i]);
}

return (0);
}
