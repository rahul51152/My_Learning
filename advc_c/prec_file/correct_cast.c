#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int data[10];
char *words[20];
int main(){
	void *gp;
	printf("generinc pointer example\n");
	for(int i=0;i<5;i++){
		data[i]=i;
	}
	for(int i=0;i<5;i++){
		printf("%d\n",data[i]);
	}
	words[0] = "zero";
	words[1] = "one";
	words[2] = "two";
	for(int i=0;i<3;i++){
		printf("%s\n",words[i]);
	}
	gp = data+1;
	printf("address : %p\n",gp);
	printf("item pointed to by gp is %d\n",*(int *)gp);

	gp = words;
	printf("address : %p\n",gp);
	printf("item pointed to by is now %s\n",*(char**)gp);

	gp = (char **)gp + 1;
        printf("item pointed to by is now %s\n",*(char**)gp);
	return 0;
}
