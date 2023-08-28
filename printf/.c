#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    char c;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++; // Move past the '%'
            if (*format == '\0') // Handle % at the end of format string
                break;
            
            switch (*format)
            {
                case 'c':
                    c = va_arg(args, int);
                    write(1, &c, 1);
                    count++;
                    break;
                case 's':
                {
                    char *str = va_arg(args, char *);
                    while (*str)
                    {
                        write(1, str, 1);
                        str++;
                        count++;
                    }
                    break;
                }
                case '%':
                    write(1, "%", 1);
                    count++;
                    break;
                default:
                    write(1, format, 1); // Print unrecognized character after %
                    count++;
                    break;
            }
        }
        else
        {
            write(1, format, 1); // Print regular character
            count++;
        }
        
        format++;
    }

    va_end(args);

    return count;
}

