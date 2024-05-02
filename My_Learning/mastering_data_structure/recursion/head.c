#include<stdio.h>
void fun(int x){
        if(x>0){
                fun(x-1);
		printf("%d\n",x);
        }

}


int main(){
        fun(3);
        return 0;

}
