#include <stdio.h>
#include <stdlib.h>

#define A for(i=1;i<atoi(argv[1])+1;i++){
#define ME return 1;
#define PLEASE if(!(i%3==0|i%5==0))printf("%d",i);printf("\n");}return 0;}
#define FIZZBUZZ if(i%3==0)printf("Fizz"); if(i%5==0)printf("Buzz");
#define MAKE int main(int argc,char** argv){int i;if(argc!=2)

MAKE ME A FIZZBUZZ PLEASE
