#include <stdio.h>
/**
 * main - Print "Holberton" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char name[] = "_putchar";
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}