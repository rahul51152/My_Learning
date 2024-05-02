// to marge the array in 3rd array
#include <stdio.h>
void main(){
int c[10],j,i,x;
int k;
int a[5]={1,2,3,4,5};
int b[5] = {1,2,3,4,5};
for(i=0;i<5;i++){ 
c[i]=a[i];
}
k=i;
for(i=0;i<5;i++){ 
      c[k]=b[i];
    k++;
}

for(x=0;x<10;x++){ 
printf("%d\n",c[x]);
}
}
