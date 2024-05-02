#include<stdio.h>
#include<time.h>
#include<math.h>
#include<ctype.h>

int main(){
	time_t calender_start = time(NULL);
	clock_t cpu_start =  clock();
	int count =0;

	const long long iterations = 1000000000LL;
	char answer='y';
	double x = 0.0;

	printf("initial clock time = %lld initial calender time = %lld\n",(long long)cpu_start,(long long)calender_start);

	while(tolower(answer)=='y'){
		for(long long i =0LL;i<iterations;++i)
			x=sqrt(3.14159265);
		printf("%lld square roots complate.\n",iterations*(++count));
		printf("Do you want to run more (y or n) ? \n");
		scanf("\n%c",&answer);
	}

	clock_t cpu_end = clock();
	time_t calender_end = time(NULL);

	printf("finel clock time = %lld final calender time = %lld\n",(long long)cpu_end,(long long)calender_end);
	printf("cpu time for %lld iteration is %.21f seconds\n",count*iterations,((double)(cpu_end-cpu_start))/CLOCKS_PER_SEC);
	printf("elapsed calender time to execute the program is %8.21f second .\n",difftime(calender_end,calender_start));

	return 0;
}
