#include "main.h"
#include <stdio.h>
/**
* print_array - a function that prints n elements of an array
* @a: name of array
* @n: the number of elements of the array to be printed
* Return: inputs a and n
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
