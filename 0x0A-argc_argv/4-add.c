#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
    if (argc == 1)
      {
        printf("0\n");
        return 0;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++)
      {
        int num = atoi(argv[i]);

        if (num <= 0)
	  {
            printf("Error\n");
            return 1;
        }

        sum += num;
    }

    printf("%d\n", sum);
    return (0);
}
