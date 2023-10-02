#include <stdio.h>
#include "main.h"

/**
 *a function that computes the absolute value of an integer.
 *
 */
int _abs(int num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}
