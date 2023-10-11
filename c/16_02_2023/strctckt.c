#include<stdio.h>
struct cricketer {

char name[10];
int score;
struct cricketer *next;
};
void main(){
struct cricketer c[3]={{"kohali",105,c+1},{"rohit",57,c+2},{"gill",20,c}};
struct cricketer *p;
p=&c[0];
printf("%s\t",p->name);
printf("%d\n",p->score);
p=p->next;


printf("%s\t",p->name);
printf("%d\n",p->score);
p=p->next;

printf("%s\t",p->name);
printf("%d\n",p->score);
p=p->next;
}

