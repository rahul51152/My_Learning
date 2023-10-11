#include<stdio.h>
int f[10];
int fun(int n){
        if(n<=1){
		f[n]=n;
              	return n;
        }
	else{
		if(f[n-2]==-1){
                	f[n-2]=fun(n-2);
		}
		if(f[n-1]==-1){
			f[n-1]=fun(n-1);
		}
		f[n]=f[n-2]+f[n-1];
		return fun(n-2)+fun(n-1);
	}

}
int main(){
        int r;
	for(int i=0;i<10;i++){
		f[i]=-1;
	}
        r=fun(6);
        printf("%d\n",r);
        return 0;
}
