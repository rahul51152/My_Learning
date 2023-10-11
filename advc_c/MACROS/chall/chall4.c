#include<stdio.h>
#define IS_UPPER(x) (x>='A' && x<='Z')
#define IS_LOWER(x) (x>='a' && x<='z')
#define IS_ALPHABET(x) (IS_LOWER(x) || IS_UPPER(x))
#define IS_VOWEL_LOWER(x)(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
#define IS_VOWEL_UPPER(x)(x=='A'||x=="E"||x=='I'||x=='O'||x=='U')
#define is_DIGIT(x) (x>= '0' && x<='9')
#define IS_ALPHANUMERIC(X) (IS_ALPHABET(x) || IS_DIGIT(x))
#define IS_WHITE_SPACE(x) (x=='' || x=='\t'||x=='\r'||x=='\n')
#define IS_SPECIAL_CHARACTER(x) (x>=32 && x<=127 && !IS_ALPHABET(x))

int main(){
	char ch = '\0';
	printf("Enter character : ");
	scanf("%c",&ch);
	

	if(IS_UPPER(ch))
		printf("%c is uppercase\n",ch);
	else if(IS_LOWER(ch)){
		printf("%c is lowercase\n",ch);
	}
	else
		printf("Enter character is not alphabet");
	return 0;
}


