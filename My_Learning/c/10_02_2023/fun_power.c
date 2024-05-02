#include<stdio.h>

int power1(int x,int y){
int pwr=1;
for(int i=1;i<=y;i++){
pwr=pwr*x;
}

return pwr;
}
void power2(int x,int y){
int pwr=1;
for(int i=1;i<=y;i++){
pwr=pwr*x;
}
printf("ans is %d\n",pwr);
}

void main()
{
int x,y,p;
printf("enter the base of the number  : ");
scanf("%d",&x);
printf("enter the power of the number  ");
scanf("%d",&y);
p=power1(x,y);
printf("ans is :%d\n",p);
power2(x,y);
}
