#include<stdio.h>
int fibo(int n){
        if(n<=1){
              return n;
        }
        else
                return fibo(n-2)+fibo(n-1);

}
int main(){
        int r;

        r=fibo(6);
        printf("%d\n",r);
        return 0;
}
