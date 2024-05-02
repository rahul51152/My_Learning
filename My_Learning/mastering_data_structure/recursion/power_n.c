#include<stdio.h>
int pow_n(int m,int n){
        if(n==0){
              return 1;
        }
        else
                return pow_n(m,n-1)*m;

}
int main(){
        int r;
        r=pow_n(6,2);
        printf("%d\n",r);
        return 0;
}
