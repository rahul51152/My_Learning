#include<stdio.h>
void fac1(int n){
int f=1;
printf("enter then value of n :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
f=f*i;
}
printf("factorial  is %d\n",f);
}



int fac2(int n){
int f=1;
printf("enter then value of n :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
f=f*i;
}
return f;
}

void main()
{
int  n ,ans;
fac1(n);
ans = fac2(n);
printf("factorial  is %d\n",ans);
}
