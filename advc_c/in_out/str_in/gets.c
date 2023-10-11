#include<stdio.h>
#include<string.h>

int main(){
	char buf[255];
	int ch='\0';
	char *p = NULL;
	if(fgets(buf,sizeof(buf),stdin)){
		p= strchr(buf,'\n');
		if(p){
			*p='\n';
		}
		else{
			while(((ch=getchar())!='\n') && !feof(stdin)&&!ferror(stdin));
		}
	}
	else{

	}
	puts(buf);
	printf("our buf containe: jason is hear\n");
	return 0;
}

