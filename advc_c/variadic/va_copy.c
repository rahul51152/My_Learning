#include<stdio.h>
#include<stdarg.h>
#include<string.h>

int str_copy(int v1, int v2,...){
	int sum=0;
	va_list arg1;
	va_start(arg1,v2);
	

	va_list arg2;
	va_copy(arg2,arg1);
	int count=2;

	for(int i=0;(va_arg(arg1,int))!=0;i++){
		int num=va_arg(arg1,int);
		sum+=num;
		count++;
	}
	va_end(arg1);

	int mean = sum/count;
	int sum_sq_diff=0;


	for(int i=0;i<count;i++){
		int num= va_arg(arg2,int);
		sum_sq_diff+=(num-mean)*(num-mean);
	}
	va_end(arg2);
	
	
	return sum_sq_diff/count;
}	


int main(){
	int v1=30,v2=20;
	printf("result : %d\n",str_copy(v1,v2,10,20,30,0));
	return 0;
}

