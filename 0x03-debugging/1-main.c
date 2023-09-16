#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");/*to print numbers from 0 to 9*/

        i = 0;

        while (i < 10)
        {
                putchar(i);/*print numbers*/
        }

        printf("Infinite loop avoided! \\o/\n");/*to avoid infnite loop*/

        return (0);
}
