// prec 2 : find  the gross salary of  employ
#include<stdio.h>
void main(){
int sal,hra,da, tot;
printf("basic salary : ");
scanf("%d",&sal);

if(sal<1500){
hra=0.1*sal;
da=0.9*sal;
tot=sal+hra+da;
printf("gross salary : %d\n",tot);
}

else{
hra=500;
da=0.98*sal;
tot=sal+hra+da;
printf("gross salary : %d\n",tot);
}
}
