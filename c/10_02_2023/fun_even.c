#include<stdio.h>

int iseven(int n){
if(n%2==0){
return 1;
}
else{
return 0;
}
}


void main(){
 int n;
printf("enter the number : ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
if(iseven(i)){
printf("%d is the even number\n",i);
}
}
}
