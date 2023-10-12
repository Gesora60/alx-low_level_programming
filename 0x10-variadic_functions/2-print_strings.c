#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int i;
	va_list args;
	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(args, n);

	if (n > 0)
		printf("%s", va_arg(args, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(args, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(args);
}
