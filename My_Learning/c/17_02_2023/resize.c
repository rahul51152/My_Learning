#include<stdio.h>
#include<stdlib.h>
void main(){
	int i,n1,n2;
	int *fp;
	printf("Enter size of list : ");
	scanf("%d",&n1);
	fp=(int *)malloc(n1*sizeof(int));


	for(int i=0;i<n1;i++){
		scanf("%d",&fp[i]);
	}
	printf("the number in the list are :");
	for(int i=0;i<n1;i++){
	printf("%d",fp[i]);
	}
	printf("\n");


	printf("Enter new size of list : ");
	scanf("%d",&n2);

	fp=(int *)realloc(fp,n2*sizeof(int));
	if(n2>n1)
		printf("Enter numbers\n");
		for(int i=n1;i<n2;i++){
		scanf("%d",&fp[i]);
	}

	printf("the number in the list are");
	for(int i=0;i<n2;i++){
	printf("%d",fp[i]);
	}printf("\n");
}

