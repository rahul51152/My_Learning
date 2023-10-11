#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node {
	char a[10];
};
int main(int argc, char * argv[]){
	char *s1;
	char *s2;
	int i=0;
	s1=calloc(argc,sizeof(char)*10);
	while(i)
		if(argc==1){
			printf("hello\n");	
		}
		else{
			strcpy(s1,argv[i]);
			s2=s1;
			printf("%s\n",s1);
			s1=s1+strlen(argv[i]);
			i++;
			strcpy(s1,argv[i]);
			printf("%s\n",s1);
		}
	printf("%s\n",s2);

	//}
	return 0;
}

	
