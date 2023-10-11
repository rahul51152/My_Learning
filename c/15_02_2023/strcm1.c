#include<stdio.h>
#include<string.h>

void main(){
char string1[]="spark";
char string2[]="programming";
int cmp=strcmp(string1,string2);
if(cmp>0){
printf("%s>%s\n",string1,string2);
}
else{
if(cmp<0)
printf("%s<%s\n",string1,string2);
else
printf("%s==%s\n",string1,string2);
}

}
