#include<stdio.h>
void main()
{
int n ,count;
int a[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array\n : ",i);
   scanf("%d",&a[i]);
}

int data;
printf("which number  : ");
scanf("%d",&data);

for(int i=0;i<n;i++){
if(a[i]==data){
count =1;
}
else {
;
}

}
if(count ==1){
printf("number is in array\n");
}
else
printf("number is not in the array\n");

}

