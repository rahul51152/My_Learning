#include<stdio.h>
void main()
{
int i,n;
printf("enter initial :");
scanf("%d",&n);
for(i=n;i<n+20;i++)
{  if(i%2==0){
printf("%d\n",i);
}
}

printf("---------------------------\n");
for(i=n;i<n+20;i++)
{  if(i%2!=0){
printf("%d\n",i);
}
}


}
