#include<stdio.h>
void main()
{
int a[3][3]={{1,1,1},{2,2,2},{3,3,3}};
int b[3][3]={{1,1,1},{2,2,2},{3,3,3}};
int ans[3][3];

for ( int i=0;i<3;i++){
   for ( int j=0;j<3;j++){
ans[i][j]=0;
         for ( int k=0;k<3;k++){

     ans[i][j]= ans[i][j]+a[i][j]*b[k][j];
}printf(" %d\t",ans[i][j]);
} printf("\n");
}
}
