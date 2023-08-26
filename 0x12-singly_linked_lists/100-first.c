#include <stdio.h>

void pre_main_message(void) __attribute__ ((constructor));

/**
 * pre_main_message - displays a message before the main function runs
 */
void pre_main_message(void)
{
	printf("You're defeated, yet you yield,\n");
	printf("My dwelling rests upon my field!\n");
}
