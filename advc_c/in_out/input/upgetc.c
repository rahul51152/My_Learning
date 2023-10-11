#include<stdio.h>
#include<ctype.h>
int main(){
	char ch =0;
	while(isspace(ch=(char)getchar()));
	ungetc(ch,stdin);  /// we are put spavce in the input termenales then ignore spaces and take input
	printf("char is %c\n",getchar());
	return 0;
}
