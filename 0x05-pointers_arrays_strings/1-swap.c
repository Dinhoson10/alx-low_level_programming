#include "main.h"
/**
 * swap_int - swaps the value of two integer
 *
 * @a: pointer to an int
 * @b: pointer to other int
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
