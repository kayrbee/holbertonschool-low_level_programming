#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - adds along the diagonal axes of multidimensional array
 * @a: integer array[][]
 * @size: size of array (describes both axes)
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int start = 1;
	int stop = size * size;
	int next_left = size + 1;
	int sum_left = 0;
	int next_right = size - 1;
	int sum_right = 0;
	int reference = 0;

	while (start <= stop)
	{
		reference = start - 1; 
		sum_left = sum_left + a[reference];
		start = start + next_left;
	}
	
	start = size;
	while (start < stop)
	{
		reference = start - 1; 
		printf("start: %d, ref: %d ", start, reference);
		sum_right = sum_right + a[reference];
		start = start + next_right;
		printf("new start: %d, sum_right: %d\n", start, sum_right);
	}
	printf("%d, %d\n", sum_left, sum_right);
}

int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
/*    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    }; */
    print_diagsums((int *)c3, 3);
/*    print_diagsums((int *)c5, 5); */
    return (0);
}

