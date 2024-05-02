#include <stdio.h>
#include <string.h>
#include <malloc.h>

int array1[] = {10,20,30,40,50,60,70,80,90,100};
int array2[] = { 38, 27, 87, 63, 59, 223, 132, 1, 19, 7 };


int add(int a, int b) {	return a + b;	}
int sub(int a, int b) {	return a - b;	}
int mult(int a, int b) {	return a * b;	}
int div(int a, int b) {	return a / b;	}

int (*fparr[])(int,int)={&add,&sub,&mult,&div};

int* performOp(int *a, int *b, int size,int(*f)(int,int));

void display(int *x, int size);

int main( ){
  
  int choice = 0;                      
  unsigned int size = 0;		
  int *result = NULL;

  size = sizeof(array1);
  if (sizeof(array2) < size)
	size = sizeof(array2);
  size = size / sizeof(int);

  while(choice != 5)
  {
	printf("\n\nWhich operation do you want to perform? \n");
	printf("1.Add \n");
	printf("2.Subtract \n");
	printf("3.Multiply \n");
	printf("4.Divide \n");
	printf("5.None ... \n");
	printf("Enter choice: ");
	scanf("%d", &choice);

	if(choice == 5) break;
	if(choice < 1 || choice > 5) continue;

	int j = choice - 1;

	result = performOp(array1,array2,size,fparr[j]);		

	printf("\n\nThe Results are ...\n");
	display(result,size);
	
	if(result!=NULL)  
	   free(result);

  }
  
  return 0;
}


 
int* performOp(int *a, int *b, int size,int(*f)(int,int)){
	int *c = malloc(sizeof(int)*size);
	for(int i=0;i<size;i++){
		c[i] = (f)(a[i],b[i]);
	}
      	return c;
}

void display(int *x, int size)
{
   if(x==NULL) return ;
   for(int i=0;i<size;i++){
	   printf("%d\t",x[i]);
   }
   printf("\n");
}

