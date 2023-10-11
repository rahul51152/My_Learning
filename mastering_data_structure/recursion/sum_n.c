#include<stdio.h>
int sum(int x){
        if(x==0){
              return 0;
        }
	else
		return sum(x-1)+x;

}
int main(){
	int r;

	r=sum(5);
	printf("%d\n",r);
	return 0;
}

