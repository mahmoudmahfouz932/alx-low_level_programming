#include "main.h"

/**
*reset_to_98 -Entry
*reset_to_98 to reset the value useing pointer
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
