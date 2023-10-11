#include<stdio.h>
void main(){
int n;
printf("which table : ");
scanf("%d",&n);
for(int i=1;i<=10;i++){
printf("%d * %d = %d\n",n,i,n*i);
}
}

