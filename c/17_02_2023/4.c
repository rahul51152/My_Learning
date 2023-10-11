#include<stdio.h>
void main(){
	FILE *fp1,*fp2; //p is a file type pointer
	char ch1,ch2;
	int f;        //ch is the use to store single character
	fp1=fopen("1.c","r");
	fp2=fopen("2.c","r");
	while(1)
	{
		ch1 = getc(fp1);
		ch2 = getc(fp2);

		if(ch1==EOF ||ch2==EOF)
		{
		break;
		}

		if(ch1!=ch2){
			f=1;
		break;
		}
			else
			f=0;
	}
	if(f==1)
		printf("file is not same ....:\n");
	else 
		printf("file is same:\n");
}
