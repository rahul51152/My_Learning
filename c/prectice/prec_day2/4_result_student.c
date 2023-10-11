// prec 2 : student result 
#include<stdio.h>
void main(){
int a,b,c,d,e;  // for five subject marks
float  per ; 
printf("first subject marks  : ");
scanf("%d",&a);
printf("second subject marks  : ");
scanf("%d",&b);
printf("third subject marks  : ");
scanf("%d",&c);
printf("fourth subject marks  : ");
scanf("%d",&d);
printf("five subject marks  : ");
scanf("%d",&e);
per=(a+b+c+d+e)/5;


if(per>=60){
printf(" you got %d %% percentage in the exam\n");
printf("First class ...\n");
}

else if(per>=50&&per<60){
printf(" you got %d %% percentage in the exam\n");
printf("Second class ...\n");
}

else if(per>=40&&per<50){
printf(" you got %d %% percentage in the exam\n");
printf("Third class ...\n");
}

else if(per<40){
printf(" you got %d %% percentage in the exam\n");
printf("Fail ...\n");
}


}
