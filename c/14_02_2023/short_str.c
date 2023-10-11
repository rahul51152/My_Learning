#include<stdio.h>
#include<string.h>
void main()
{
	char  temp;
	char a[100];
	scanf("%s",a);
	for ( int i=0;i<strlen(a);i++){
		for ( int j=i+1;j<strlen(a);j++){
     			if(strcmp(&a[i],&a[j])>0){
     			temp=a[i];
      			a[i]=a[j];
       			a[j]=temp;
			}
		}
	}	

	printf("%s\n",a);
	
}
