#include<stdio.h>

void fun2(int x){
        if(x>1){
                printf("%d\n",x);
                fun2(x/2);
        }

}

void fun1(int x){
        if(x>0){
                printf("%d\n",x);
                fun2(x-1);
        }

}


int main(){
        fun1(20);
        return 0;

}
