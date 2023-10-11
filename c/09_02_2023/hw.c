#include<stdio.h>
void main()
{
int max,diff;
int a[7]={100,130,160,40,250,500,690};
for ( int i=0;i<7;i++){
diff=0;
     for ( int j=0;j<7;j++){
        diff=a[j]-a[i];
      if(diff>0 && max<diff){
        max=diff;
         }           
}          
}
printf("profit is given to %d\n : ",max);
}

