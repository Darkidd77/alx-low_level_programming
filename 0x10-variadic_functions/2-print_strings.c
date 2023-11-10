#include "variadic_functions.h"
/**
 * print_strings - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 **/

void print_stings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;


	va_list ptr_str;

	va_start(ptr_str, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(tr_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	print("\n");
	va_end(ptr_str);
}
