#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void obfuscate(char* str)
{
    int buffer = 0;

    strcpy((char *) &buffer, str);
    printf("%d\n", buffer);
} 


void main(void)
{
    obfuscate("Fizz");
}
