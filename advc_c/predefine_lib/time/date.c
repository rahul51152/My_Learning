#include<stdio.h>
#include<time.h>
#include<math.h>
#include<ctype.h>

int main(){
        const char *day[] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
        const char *month[] = {"january","february","march","april","may","june","july","august","saptember","october","november","december"};
	const char *suffix[]= {"st","nd","rd","th"};

	enum sufindex{st,nd,rd,th}sufsel=th;

	struct tm birthday={0};
	char name[30]={'\0'};

	printf("Enter a name :");
	scanf("%s",name);


	printf("Enter the birthday for %s as day month year integers seprated by space . Enter 1st febuary 1985 as 1 2 1985 : ",name);

	scanf("%d %d %d",&birthday.tm_mday,&birthday.tm_mon,&birthday.tm_year);
	birthday.tm_mon-=1;
	birthday.tm_year-=1900;
	if(mktime(&birthday)==-1){
			fprintf(stderr,"operation failed.\n");
			return -1;
	}

	switch(birthday.tm_mday){
		case 1: case 21: case 31:
			sufsel=st;
			break;
		case 2:case 22:
			sufsel =rd;
			break;
		case 3 : case 23:
			sufsel = rd;
			break;
		default :
			sufsel = th;
			break;
	}
	printf("%s was born on the %d%s %s %d , which was a %s\n",name,birthday.tm_mday,(int *)sufsel,birthday.tm_mon,&birthday.tm_year,birthday.tm_mday);
	return 0;
}
