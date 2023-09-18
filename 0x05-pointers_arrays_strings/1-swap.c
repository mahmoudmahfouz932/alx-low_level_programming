#include "main.h"

/**
*swap_int -Entry
*swap_int to swap the values of a and b useing pointer
*@a: The pointer used in function
*@b: The pointer used in function
**Return: void
*/
void swap_int(int *a, int *b)
{
	int ptr1 = *a;
	*a = *b;
	*b = ptr1;
}
