#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int str_len(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

int multiply(char *num1, char *num2)
{
    int len1 = str_len(num1);
    int len2 = str_len(num2);
    int *result;
    int i, j, carry, sum, n1, n2;

    result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = 0; i < len1 + len2; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        n1 = num1[i] - '0';
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            sum = n1 * n2 + result[i + j + 1] + carry;
            carry = sum / 10;
            result[i + j + 1] = sum % 10;
        }
        result[i + j + 1] += carry;
    }

    for (i = 0; i < len1 + len2; i++)
    {
        if (result[i] != 0 || i == len1 + len2 - 1)
        {
            for (; i < len1 + len2; i++)
                _putchar(result[i] + '0');
            break;
        }
    }
    _putchar('\n');

    free(result);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i]; i++)
    {
        if (!is_digit(num1[i]))
        {
            printf("Error\n");
            return (98);
        }
    }

    for (int i = 0; num2[i]; i++)
    {
        if (!is_digit(num2[i]))
        {
            printf("Error\n");
            return (98);
        }
    }

    multiply(num1, num2);
    return (0);
}
