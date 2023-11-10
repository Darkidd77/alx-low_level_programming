#include "variadic_functions.h"
/**
* print_numbers - prints numbers followed by a new line
* @n: number of parameter
* @separator: separator between two numbers
* Return: Always 0
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str

	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
