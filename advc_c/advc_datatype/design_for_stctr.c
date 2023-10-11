#include<stdio.h>
struct point {int x,y;};
int main(){
	struct point p ={.y =2,.x=3};
	//struct point p = {y:2,x:3};
	struct point p1[5] = {[2].y=5,[2].x=6};
	printf("x and y is : %d\t%d\n",p.x,p.y);
	printf("%d %d\n",p1[2].x,p1[2].y);
	return 0;
}
