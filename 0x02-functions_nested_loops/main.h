#include <unistd.h>
/**
 * my header files
 */
int _putchar(char t)
{
	return (write(1, &t, 1));
}
