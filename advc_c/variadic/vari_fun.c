#include<stdio.h>
#include<stdarg.h>
double avrg(double v1,double v2,...);
int main(){
	double v1=10.5,v2 = 2.5;
	int num1=6,num2=5;
	long num3=12L,num4=20L;

	printf("average : %.2f\n",avrg(v1,3.5,v2,4.5,0.0));
	printf("average : %.2f\n",avrg(1.0,2.0,0.0));
	printf("average : %.2lf\n",avrg((double)num2,v2,(double)num1,(double)num3, (double)num4));
	return 0;
}
double avrg(double v1,double v2,...){
	va_list parg;
	double sum = v1+v2;
	double value =0.0;
	int count=2;
	va_start(parg,v2);

	while((value = va_arg(parg,double))!=0.0){
		sum+=value;
		++count;
	}
	va_end(parg);
	return sum/count;
}
	
