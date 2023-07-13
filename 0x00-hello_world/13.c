#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * main - Entry point of the program
 * Description: This function prints the size of various types
 * on the computer it is compiled and run on
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *mess = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, mess, strlen(mess));
	return (1);
}

