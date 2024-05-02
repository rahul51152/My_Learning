#include<stdio.h>
int main(){
        char ch = '\0';
	FILE *fp = NULL;
	if(fp = fopen("somefile.txt","rw")){
		ch= getc(fp);
		while(ch!=EOF){
			putc(ch,fp);
			ch= getc(fp);
		}
		fclose(fp);
	}
        return 0;
}
