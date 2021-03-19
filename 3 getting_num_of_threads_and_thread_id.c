#include <omp.h>
#include <stdio.h>

int main(int *argc, int *argv[])
{

	#pragma omp parallel num_threads(10)
	{
		//get number of threads
		int numt = omp_get_num_threads();
		//get thread id
		int tid = omp_get_thread_num();

		printf("Number of threads = %d, Thread id = %d\n",numt, tid);
	}

	return 0;
}

/* output:- 

Number of threads = 10, Thread id = 1
Number of threads = 10, Thread id = 2
Number of threads = 10, Thread id = 3
Number of threads = 10, Thread id = 4
Number of threads = 10, Thread id = 6
Number of threads = 10, Thread id = 7
Number of threads = 10, Thread id = 8
Number of threads = 10, Thread id = 9
Number of threads = 10, Thread id = 5
Number of threads = 10, Thread id = 0

*/