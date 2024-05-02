#include<stdio.h>
void main(){
int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
int temp;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
         printf("%d",a[i][j]);    
}printf("\n");
}

for(int i=0;i<3;i++){
temp=0;
    for(int j=0;j<2;j++){
         temp=a[i][j];
         a[i][j]=a[i][j+1];
          a[i][j+1]=temp;      
}
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
         printf("%d",a[i][j]);    
}printf("\n");
}
}
