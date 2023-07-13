#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints the size of various types
 * on the computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	/* Print the size of the int type */
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	/* Print the size of the short type */
	printf("Size of short: %zu byte(s)\n", sizeof(short));
	/* Print the size of the long type */
	printf("Size of long: %zu byte(s)\n", sizeof(long));
	/* Print the size of the long long type */
	printf("Size of long long: %zu byte(s)\n", sizeof(long long));
	/* Print the size of the float type */
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	/* Print the size of the double type */
	printf("Size of double: %zu byte(s)\n", sizeof(double));
	/* Print the size of the long double type */
	printf("Size of long double: %zu byte(s)\n", sizeof(long double));
	return (0);
}
