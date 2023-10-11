#include<stdio.h>
#include<string.h>
#define SIZE 6
void sort(int *a){
	int temp=0;
	for(int i=0;i<SIZE;i++){
		for(int j=i;j<SIZE;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}


int main(){
	int a[SIZE]={8,3,5,7,4,2};
	sort(&a[0]);
	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	printf("%d\n",a[2]);
	printf("%d\n",a[3]);
	printf("%d\n",a[4]);
	printf("%d\n",a[5]);
	int i=0,sum=0;
	while(i!=SIZE){
		sum=sum+a[i];
		i=i+2;
	}
	printf("result : %d\n",sum);
	return 0;
}
