#include <omp.h>
#include <stdio.h>

int main(int *argc, int *argv[])
{
	//Here in num_threads(n), n = number of threads
	//we can also use command in terminal export OMP_NUM_THREAD=4
	//for declaring number of threads
	#pragma omp parallel num_threads(5)
	{
		printf("Hello Rajat\n");
	}
	return 0;
}

//output
/*
Hello Rajat
Hello Rajat
Hello Rajat
Hello Rajat
Hello Rajat
*/