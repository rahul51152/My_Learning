#include<stdio.h>
#include<string.h>
void main(){
char  s1[10],s2[10];
int count;
scanf("%s",s1);
scanf("%s",s2);
for(int i=0;i<strlen(s1);i++){
  for(int j=0; j<=strlen(s2);j++ ){
        if(s1[i]==s2[j]){
          count++;
          }
         else
           count =0;
}
}if(count=strlen(s1)){
printf("string are anagram of each other....\n");
}
else
printf("string are not anagram of each other....\n");
}
