#include <stdio.h>
#include "main.h"

/**
 *Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 *return: 0
 */
void print_alphabet_x10(void) {
    char letter;
    int i;

    for (i = 0; i < 10; i++) {
        letter = 'a';
        while (letter <= 'z') {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
    }
}
