#include "main.h"
/**
 * get_sigint - Handle the ctrl + c call input
 * @sig: Signal handler
*/

void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
