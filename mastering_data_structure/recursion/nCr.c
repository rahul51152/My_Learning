#include<stdio.h>
int nCr(int n,int r){
        if(n==r||r==0){
              return 1;
        }
        else
                return nCr(n-1,r-1)+nCr(n-1,r);

}
int main(){
        int r;

        r=nCr(6,2);
        printf("%d\n",r);
        return 0;
}
