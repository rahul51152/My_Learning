#include<stdio.h>
void main()
{
int n,d ,count;
int a[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array\n : ",i);
   scanf("%d",&a[i]);
}

int data;
printf("which number of index  : ");
scanf("%d",&data);

for(int i=0;i<n;i++){
if(i==data){
d=a[i];
count =1;
}
else {
;
}

}


if(count ==1){
printf("%d value of given index\n",d);
}
else
printf("number is not present for given index\n");

}
