#include<stdio.h>
void main(){
int sal;
float dfa,hra,g_sal;
printf("enter your basic salary : ");
scanf("%d",&sal);
dfa = 0.4*sal;
hra = 0.2*sal;
g_sal = sal+dfa+hra;
printf("your dfa is : %f\n",dfa);
printf("your hra is : %f\n",hra);
printf("your gross salary is : %f\n",g_sal);

}
