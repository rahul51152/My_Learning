#include<stdio.h>
#include<assert.h>
#include<math.h>

int main(){
        double x,y,z;
	printf("Enter a pair of number (0,0 to quite) : ");

        while(scanf("%lf%lf",&x,&y)==2 && (x!=0 || y!=0)){
                z=x*x-y*y;
		assert(z>=0);
		printf("answer is %f\n",z/4);
		puts("next pair of numbers :");
	}
	puts("done");
        return 0;
}
