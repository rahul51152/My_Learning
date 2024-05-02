#include<stdio.h>


struct student {
	int rollno;
	char name[10];
};

void display(struct student *s){

	printf("roll_no\t name\n" );
	for(int i=0;i<5;i++){
		printf("%d\t%s\n",s->rollno,s->name);
		s++;
	}
}


void main(){
	struct student s[5],*p;
	FILE *fp; 
	p=&s[0];
	fp=fopen("student.txt","a+");
	fprintf(fp,"roll_no\tName\n");
	for(int i=0;i<5;i++){
		printf("the %d student roll no  : ",i+1);
		scanf("%d",&p->rollno);
		printf("the %d student name : ",i+1);
		scanf("%s",p->name);
		fprintf(fp,"%d\t%s\n",p->rollno,p->name);
		p++;
	}


	display(s);
	fclose(fp);

}
