#include "main.h"
#include <unistd.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
void print_alphabet(void)
{
    char* c = "a";
    while (c <= "z")
    {
            _putchar(c);
            c++;
    }
	printf("_putchar\n");
}