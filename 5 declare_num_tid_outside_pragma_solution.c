#include <omp.h>
#include <stdio.h>

int main(int *argc, int *argv[])
{
	//declare numt, tid outside pragma
	int numt, tid;

	#pragma omp parallel private(tid) shared(numt) num_threads(4)
	{
		//get number of threads
		// Since numt is same for all threads, we can declare and initialize it outside
		 numt = omp_get_num_threads();
		//get thread id
		 tid = omp_get_thread_num();
		 //loop to make code fails every time - wait loop
		 for(int i=0;i<1000000;i++);
		printf("Number of threads = %d, Thread id = %d\n",numt, tid);
	}

	return 0;
}

/*output:

*/