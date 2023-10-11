#include<stdio.h>
void main()
{
float a,tax_inc,s;
printf("enter your gross salary :");
scanf("%f",&a);
printf("enter your saving  :");
scanf("%f",&s);
if(s<=100000){
     tax_inc=a-s;
     printf("taxable income is : %f\n",tax_inc);
     if(a<=100000){
     printf("your have not to pay tax ---");
     }
     if(a>100000 && a<=200000)
     {
     printf("your tax is : %f\n",tax_inc*0.1);
     } 
 

     if(a>200000 && a<=500000)
     {
     printf("your tax is : %f\n",100000*0.1+(tax_inc-200000)*0.2);
     }

     if(a>500000)
     {
       printf("your tax is : %f\n",100000*0.1+300000*0.2+(tax_inc-500000)*0.3);
     }
 }
    
if(s>100000){
     tax_inc=a-100000;
     printf("taxable income is : %f\n",tax_inc);
     if(a<=100000){
     printf("your have not to pay tax ---");
     }
     if(a>100000 && a<=200000)
     {
     printf("your tax is : %f\n",tax_inc*0.1);
     } 
 

     if(a>200000 && a<=500000)
     {
     printf("your tax is : %f\n",100000*0.1+(tax_inc-200000)*0.2);
     }

     if(a>500000)
     {
       printf("your tax is : %f\n",100000*0.1+300000*0.2+(tax_inc-500000)*0.3);
     }
 }


}
