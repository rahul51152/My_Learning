#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
       int a;
       double b;
       int c;
       long long int d;
}node;
#define COUNT 4
int main(){
	node *p,*q;
	void *v;
	printf("size of the node  : %ld\n",sizeof(node));

	p=(node*)calloc(COUNT,24);
	for(int i=0;i<COUNT;i++){
		p[i].a =i;
		p[i].b =1000.0+i;
		p[i].c =i*20;
		p[i].d =222+i;
	}
	q=p;
	printf("value : \na is %d\nb is %f\nc is %d\nd id %lld\n",q->a,q->b,q->c,q->d);
	q=p+3;
	printf("value : \na is %d\nb is %f\nc is %d\nd id %lld\n",q->a,q->b,q->c,q->d);
	return 0;
}
