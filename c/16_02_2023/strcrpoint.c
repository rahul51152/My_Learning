#include<stdio.h>
struct point
{ int x,y;
};

struct point sum(struct point *a,struct point *b){
	struct point temp;
	temp.x=a->x+b->x;
	temp.y=a->y+b->y;
return temp;
}

void main(){
struct point p1,p2;
p1.x=10;
p2.x=50;
p1.y=20;
p2.y=60;
struct point p3=sum(&p1,&p2);
printf("%d\n",p3.x);
printf("%d\n",p3.y);
}

