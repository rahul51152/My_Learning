#include<stdio.h>

int arm(int n){
int i,n,sum= 0, rem,temp;
temp=n;
while(n>0){
rem = n%10;
sum = sum+rem*rem*rem;
n=n/10;
}
 
if(temp==sum)
return 1;
else 
return 0;
}

void main(){
int n0;
printf("enter the number : ");
scanf("%d",&n0);
for(int i=0;i<=n0;i++){
if(arm(i)){
printf("%d is the armstong  number\n",i);
}
}
}
