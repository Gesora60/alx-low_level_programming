#include<stdio.h>
#include "main.h"

/**
 * checks for lowercase character.
 *
 *return: 1 Is lowercase
 *return: 0 is not lower case
 */
int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1; 
    } else {
        return 0;     }
}
