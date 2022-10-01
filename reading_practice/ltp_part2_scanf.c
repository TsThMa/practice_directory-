#include <stdio.h>

/**
 * function to scan my age and initials
 * To this , we need some input variables to store the data in
 * There are the 'placeholders' for chars in the printf func, so 
 * @f: first name
 * @m: middle name 
 * @l: last name
 * Return: 0 
 */
int main(void)
{
	char f, m, l;
	int age;
	
	printf(" Enter your initials followed by your name: ");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("My  initials are: %c%c%c and my age is %d.\n", f, m, l, age); /*these had to change from the prev, ex.*/
	return(0);                                                            /*
}
