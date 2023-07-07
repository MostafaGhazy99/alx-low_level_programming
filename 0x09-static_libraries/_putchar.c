#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
(void) c;  /* Suppress unused parameter warning */
return (write(1, &c, 1));
}
