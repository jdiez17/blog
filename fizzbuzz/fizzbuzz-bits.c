#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

enum FizzBuzz
{
    FIZZ = 1,
    BUZZ = 2
};

int main(int argc, char** argv)
{
    int i;
    uint8_t fizzbuzz;
    if(argc != 2) return EXIT_FAILURE;

    for(i = 1; i < atoi(argv[1]) + 1; i++)
    {
        fizzbuzz = 
            ((i % 3 == 0) ? (1 << FIZZ) : 0) | 
            ((i % 5 == 0) ? (1 << BUZZ) : 0);

        if((fizzbuzz >> FIZZ) & 1)
        {
            printf("Fizz");
        }

        if((fizzbuzz >> BUZZ) & 1)
        {
            printf("Buzz");
        }

        if(fizzbuzz == 0)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return EXIT_SUCCESS;
}


