#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Just an example from the reading material
 * Let's see what the program runs!
 */
main()
{
	char c;
	c = CHAR_MIN;
	while(c != CHAR_MAX)
	{
		printf("%d\n", c);
		c = c+1;
	}
	exit(EXIT_SUCCESS);
}
