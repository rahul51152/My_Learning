#include<stdio.h>
void main()
{
int nq,p,t;
float  in,n, tot,per;
printf("Enter the number of que. :");
scanf("%d",&nq);
printf("weightage of  one que. :");
scanf("%d",&p);
printf("negative mark for incorrect  que. :");
scanf("%f",&n);
printf("how many correct que. in the exam :");
scanf("%d",&t);
in=nq-t;
tot=nq*p-in*n;
per=(tot/nq*p)*100;
printf("your marks in tha exam is : %f\n",tot);
printf("percentage is : %f \n",per);
}


