#include<stdio.h>
#define SQUARE(x) (x*x)
#define CUBE(x) (x*x*x)

int main(){
        int num1=0;
        printf("Enter any number :");
        scanf("%d",&num1);
        printf("SQUARE(%d) = %d\nCUBE(%d) = %d\n",num1,SQUARE(num1),num1,CUBE(num1));
        return 0;
}
