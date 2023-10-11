#include<stdio.h>
#include<string.h>
void main(){
	char a[15]="this is amit";
	char w[10]="this";
	int f, count=0;
	for(int i =0;i<strlen(a);i++)
	{
		f=1;
		for(int j =0;j<strlen(w);j++){
			if(a[i+j]!=w[j])
			{
				f=0;
				break;
			}
		}
		if(f==1){
			count++;
		}
	}
	printf("%d\n",count);
}
