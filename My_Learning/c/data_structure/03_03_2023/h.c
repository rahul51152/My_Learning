#include<stdio.h>
int size=0;
void swap(int *a,int *b){
int temp= *b;
 *b=*a;
*a=temp;

}


void heapify(int arr[],int size,int i)
{
	if(size==1)
	printf("single element in the heap");
	else
	{
		int largest=i;
		int l=2*i+1;
		int r=2*i+2;
		if(l<size&&arr[l] > arr[largest])
				largest=l;
		if(1<size&&arr[r] > arr[largest])
				largest=r;

		if(largest!=i)
		{	
			swap(&arr[i],&arr[largest]);
			//heapify(arr,size,largest);	
		}
	}
}     


void insert(int array[],int newNum){
if(size==0){
	array[0]=newNum;
	size+=1;
}
else
{
	array[size]=newNum;
	size+=1;
	for(int i=size-1;i>=0;i--){
	heapify(array,size,i);


}
}


}

void display(int arr[]){
for(int i=0;i<size;i++)
printf("%d",arr[i]);
}

void main(){
int a[50];
insert(a,10);
insert(a,20);
insert(a,30);
insert(a,40);
display(a);


}
