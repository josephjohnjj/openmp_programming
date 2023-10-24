#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main ( int argc, char *argv[] )
{
int x = 1;
   #pragma omp parallel
   #pragma omp single
   {
       #pragma omp task shared(x) depend(out: x)
       x = 2;
       #pragma omp task shared(x) depend(in: x)
       printf("x = %d\n", x);
}
return 0; } 
