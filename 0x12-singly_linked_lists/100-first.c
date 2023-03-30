#include <stdio.h>

/*
 * Apply the constructor attribute to startupfun()
 * so that it is executed before main()
*/
	void startupfun(void) __attribute__ ((constructor));

/*
 * Apply the destructor attribute to cleanupfun()
 *so that it is executed after main()
 */

	void cleanupfun(void)__attribute__ ((destructor));


/**
 * print_before_main - Prints a message before the main function is executed.
 *
 * Description: This function prints the message "You're beat!
 *              followed by a new line and "I bore my house upon my back!"
 *              a new line.
 *
 * Return: Nothing.
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
