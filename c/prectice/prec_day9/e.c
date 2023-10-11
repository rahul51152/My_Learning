#include<stdio.h>
int area(int len, int bre){
	int a=len*bre;
	return a;
}
float  ar(int rad){
	float a=3.14*rad*rad;
	return a;
}

int per(int len, int bre){
	int p=len+bre;
	return p;
}

float pr(int rad){
	float q =2*3.14*rad;
       return q;
}

void main(){
	int l,b;
	int rad;
	printf("enter the length and breadth of rectangle : ");
	scanf("%d\t%d",&l,&b);
	printf("area : %d\n",area(l,b));
	printf("perimeter :%d\n",per(l,b));
	printf("enter the radias of circul :");
	scanf("%d",&rad);
	printf("area : %f\n",ar(rad));
	printf("perimeter :%f\n",pr(rad));
}

	

