#include <omp.h>
#include <stdio.h>

int main(int *argc, int *argv[])
{
	//declare numt, tid outside pragma
	int numt;

	#pragma omp parallel default(shared) num_threads(4)
	{
		//get number of threads
		// Since numt is same for all threads, we can declare and initialize it outside
		 
		//get thread id
		 int tid = omp_get_thread_num();
		 if(tid==0)
		 {
		 	for(int i=0;i<1000000;i++);
		 	numt = omp_get_num_threads();
		 }
		printf("Number of threads = %d, Thread id = %d\n",numt, tid);
	}

	return 0;
}

/*output:

Number of threads = 32767, Thread id = 3
Number of threads = 32767, Thread id = 2
Number of threads = 32767, Thread id = 1
Number of threads = 4, Thread id = 0


*/