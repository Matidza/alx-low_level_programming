#include "main.h"
/**
 * main  - entry point checks for alphabetic character
 * description: the character to be checked
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}