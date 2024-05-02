#include<stdio.h>
int fact(int x){
        if(x==0){
              return 1;
        }
        else
                return fact(x-1)*x;

}
int main(){
        int r;

        r=fact(6);
        printf("%d\n",r);
        return 0;
}
