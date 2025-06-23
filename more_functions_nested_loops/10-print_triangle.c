#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle to console
 * @size: number of rows in the triangle, set by main
 * Return: void
 */
void print_triangle(int size)
{
	int i, spaces, hashs;

	if (size <= 0)
		putchar('\n');
	
	for (i = 1; i <= size; i++)
	{
		for (spaces = size - i; spaces > 0; spaces--){
			putchar(' ');
		}

		for (hashs = i; hashs > 0 ; hashs--){
			putchar('#');
		}
		putchar('\n');
	}
}

int main(void)
{
    print_triangle(10);
/*    print_triangle(10);
    print_triangle(1);
    print_triangle(0); */
    return (0);
}

