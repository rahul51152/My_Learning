#include<stdio.h>
void main()
{
char d,q, t;
int s;
printf("Enter the department of the company :\n");
printf("for it press => i\nfor account press => a\nfor hr press => h\n :");
scanf("%c",&d);
printf("---------------------------------------\n");
printf("Enter years of service :");
scanf("%d",&s);
printf("---------------------------------------\n");
printf("Enter the your qualification :\n");
scanf("%c",&t);
printf("for graduate press => g\nfor postgraduate press =>p\n :");
scanf("%c",&q);
printf("---------------------------------------\n");
if(d =='i'){
            if(s<10){
                     if(q=='p')
                     printf("your salary is : 100000\n");
                     else
                     printf("your salary is : 70000\n");
                     }
           }


if(d =='i'){
            if(s>=10){
                     if(q=='p')
                     printf("your salary is : 15000\n");
                     else
                     printf("your salary is : 100000\n");
                     }
           }

  


if(d =='a'){
            if(s<10){
                     if(q=='p')
                     printf("your salary is : 100000\n");
                     else
                     printf("your salary is : 60000\n");
                     }
           }



if(d =='a'){
            if(s>=10){
                     if(q=='p')
                     printf("your salary is : 120000\n");
                     else
                     printf("your salary is : 90000\n");
                     }
           }




if(d =='h'){
            if(s<10){
                     if(q=='p')
                     printf("your salary is : 90000\n");
                     else
                     printf("your salary is : 50000\n");
                     }
           }



if(d =='h'){
            if(s>=10){
                     if(q=='p')
                     printf("your salary is : 100000\n");
                     else
                     printf("your salary is : 80000\n");
                     }
           }
}


