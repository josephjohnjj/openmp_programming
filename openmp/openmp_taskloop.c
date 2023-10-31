#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1024

int main(int argc, char* argv[])
{
	int i = 0;
	int arr[N];

	omp_set_num_threads(40);

	#pragma omp parallel
	#pragma omp single
	#pragma omp taskloop num_tasks(20)
  	for (i = 0; i < N; i++) {
    		arr[i] = i * i;
  	}


} 
