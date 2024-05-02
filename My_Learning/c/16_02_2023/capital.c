#include<stdio.h>
#include<string.h>

void capital(char *a){

int flag;
for(int i=0;i<strlen(a);i++){
if(a[i]>='A' && a[i]<='Z'){
flag=1;
}
if(a[0]>='A' && a[0]<='Z' || a[i]<='a' && a[i]>='z' ){
flag=1;
}
if(a[i]>='a' && a[i]<='z' || a[i]<='A' && a[i]>='Z' ){
flag=0;
}

}
if(flag==1){
printf("true");
}
else 
printf("false");
}
void main(){
char a[10] = "rahul";
capital(a[10]);
}

