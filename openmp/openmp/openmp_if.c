#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_parallel(int val)
{
    #pragma omp parallel if (val)
    if (omp_in_parallel())
    {
        #pragma omp single
        printf("val = %d, parallelized with %d threads\n",
                 val, omp_get_num_threads());
    }
    else
    {
        printf("val = %d, serialized\n", val);
    }
}

int main( )
{
    omp_set_num_threads(2);
    test_parallel(0);
    test_parallel(2);
} 
