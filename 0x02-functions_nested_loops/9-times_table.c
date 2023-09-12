#include "main.h"

/**
 *a function that prints the 9 times table, starting with 0.
 *
 *return: alays 0
 */
void times_table(void) {
  int i;
  int result;
    for (i = 0; i <= 10; i++) {
        result = 9 * i;
        if (i != 0) {
            _putchar(',');
            _putchar(' ');
        }
        if (result < 10) {
            _putchar(' ');
            _putchar(' ');
        }
        _putchar(result + '0');
    }
    _putchar('\n');
}
