#include<stdio.h>
void fun(int x){
        if(x>0){
                printf("%d\n",x);
                fun(x-1);
                fun(x-1);
        }

}


int main(){
        fun(3);
	printf("\n");
        return 0;

}
