#include<stdio.h>
float e(int x,int n){
	static float s=1;
        if(n==0){
              return s;
        }
        else{
                s=1+x*s/n;
		return e(x,n-1);
	}

}
int main(){
        float r;

        r=e(1,10);
        printf("%f\n",r);
        return 0;
}
