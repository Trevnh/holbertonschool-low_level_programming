#include "main.h"
/**
 * swap_int - Change the value of the int a to b
 * and b to a.
 * @a: int pointer
 * @b: int pointer
 *
 * Return
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
