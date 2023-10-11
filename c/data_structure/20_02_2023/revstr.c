/*reverse string*/
# include<stdio.h>
#include<string.h>
void main(){
 char a[10];
int n,temp,k;
printf("Enter the attandance  :");   
scanf("%s",a);
n=strlen(a);

for(int i=0,k=n-1;i<n/2,k>=n/2;i++,k--){
temp=a[i];
a[i]=a[k];         // condition for reverse the string
a[k]=temp;
}

for(int i=0; i<n;i++){
printf("%c",a[i]);
}printf("\n");
}




