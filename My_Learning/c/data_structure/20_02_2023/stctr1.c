#include<stdio.h>
 typedef struct student {

char name[10];
int dateofmatch;
int score;
};


 void main(){
struct student s[5];
for(int i=0;i<5;i++){
printf("name : ");
scanf("%s",s[i].name);
printf("date of the match : ");
scanf("%d",&s[i].dateofmatch);
printf("score : ");
scanf("%d",&s[i].score);
}


printf("Name\t Dateof match\t score\n");
for(int i=0; i<5;i++){
printf("%s\t\t",s[i].name);
printf("%d\t",s[i].dateofmatch);
printf("%d\t",s[i].score);
printf("\n");
}



}
