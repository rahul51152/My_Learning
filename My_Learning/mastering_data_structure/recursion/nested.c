#include<stdio.h>

int fun(int x){
        if(x>100){
                return x-10;
        }
	else
		return fun(fun(x+11));

}

int main(){
	int r;
	r= fun(95);
	printf("%d\n",r);
	return 0;
}
