#include<stdio.h>
int main(){
	const int maxinput = 5;
       	int i;
	double number,avrage, sum=0;
 	for(i=1;i<=maxinput;++i){
		printf("%d. enter the number : ",i);
		scanf("%lf",&number);
		if(number<0.0){
			goto jump;
		}
		sum =sum +number;
	}
	jump : 
		avrage =sum/(i-1);
		printf("sum = %.2f\n",sum);
		printf("avrage = %.2f\n",avrage);
		
	return 0;
}	
