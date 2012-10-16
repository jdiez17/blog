#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int i;

    if(argc != 2) return EXIT_FAILURE;

    for(i = 1; i < atoi(argv[1]) + 1; i++)
    {
        if(i % 3 == 0)
        {
            printf("Fizz");
        }

        if(i % 5 == 0)
        {
            printf("Buzz");
        }

        if(!(i % 3 == 0 || i % 5 == 0))
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return EXIT_SUCCESS;
}

