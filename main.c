#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hw1.h"

int main(int argc, char ** argv)
{
    if (argc != 2)
    {
        return EXIT_FAILURE;
    }

    int val = (int) strtol(argv[1], NULL, 10);
    coins(val);

    return EXIT_SUCCESS;
}