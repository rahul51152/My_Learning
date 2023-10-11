#include<stdio.h>
#include<stdlib.h>
int main(void) {
        char a[10]="30.23 39.2",*end;
        float  value = strtod(a,&end);
	float value1 = strtod(end,NULL);
        printf("value = %lf\n", value );
	printf("value1 = %lf\n",value1);
        return 0;
}
