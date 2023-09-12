#include <stdio.h>
#include "main.h"

/**
 *a function that prints the last digit of a number.
 *
 */
int print_last_digit(int)
{
  int lastDigit = n % 10;
    putchar('0' + lastDigit);
    putchar('\n');
}
