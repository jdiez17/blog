#include <stdio.h>
#include <stdlib.h>

void fizzbuzz(int max)
{
    static int i = 1;
    if(i == max + 1) return;

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

    i++;
    fizzbuzz(max);
}

int main(int argc, char** argv)
{
    if(argc != 2) return EXIT_FAILURE;
    
    fizzbuzz(atoi(argv[1]));

    return EXIT_SUCCESS;
} 
