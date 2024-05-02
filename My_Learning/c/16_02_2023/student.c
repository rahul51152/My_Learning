#include<stdio.h>
typedef struct student {
	char name[10];
	int rollno;
	char department[10];
	char course[10];
	int joiningyear;
};
 
void display( struct student *s, int x){
	for(int i=0; i<3;i++){
		if(s->joiningyear==x){
			printf("%s\t",s->name);
			printf("%d\t",s->rollno);
			printf("%s\t",s->department);
			printf("%d\t",s->joiningyear);
		}
		printf("\n");
		s++;
	}
}



void rolln( struct student *s, int y){
	for(int i=0; i<3;i++){
		if(s->rollno==y){
			printf("%s\t",s->name);
			printf("%d\t",s->rollno);
			printf("%s\t",s->department);
			printf("%d\t",s->joiningyear);
		}
		printf("\n");
		s++;
	}
}



void main(){
	struct student s[3];
	int n,m;
	for(int i=0;i<3;i++){
		printf("name : ");
		scanf("%s",s[i].name);
		printf("rollno : ");
		scanf("%d",&s[i].rollno);
		printf("department : ");
		scanf("%s",s[i].department);
		printf("course : ");
		scanf("%s",s[i].course);
		printf("joiningyear : ");
		scanf("%d",&s[i].joiningyear);
	}
	printf("which year data : ");
	scanf("%d",&n);
	printf("which year data : ");
	scanf("%d",&m);
	display(s,n);
	rolln(s,m);
}
