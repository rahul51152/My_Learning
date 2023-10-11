#include<stdio.h>
void main()
{
int a,b,fin;
printf("enter prize of the book :");
scanf("%d",&a);
printf("days of the book returned late :");
scanf("%d",&b);
if(b<=5){
     printf("you have to pay charge is : %d\n",b*5);
}
if(b>5 && b<=10){
     printf("you have to pay charge is : %d\n",5*5+(b-5)*10);
}
if(b>10 && b<=30){
     printf("you have to pay charge is : %d\n",5*5+5*10+(b-10)*20);
}
if(b>30){
    fin  = 5*5+5*10+(b-10)*20;
    if (a>fin)
    printf("you have to pay charge is : %d\n",a);
    if (fin>a)
    printf("you have to pay charge is : %d\n",fin);
}
}
