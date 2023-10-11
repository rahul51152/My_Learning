// prec 2 : worker efficincy based on hours
#include<stdio.h>
void main(){
int hour;
printf("time for work (in hours) : ");
scanf("%d",&hour);

if(hour<=3){
printf("higher effeiciency\n");
}

else if(hour >3 &&hour<=4){
printf("improve speed\n");
}

else if(hour >4 &&hour<=5){
printf("give training to improve speed\n");
}

else if(hour>5){
printf("leave the company \n");
}
}
