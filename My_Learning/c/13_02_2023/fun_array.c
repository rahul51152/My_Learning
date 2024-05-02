#include<stdio.h>


 scanarr(int a[],int n){ 
for( int i=1;i<=n;i++){
printf("Enter the %d array element : ",i);
scanf("%d\t",&a[i]);
}
}
void main() {
int a[10];

int b[5];

int c[20];
scanarr(a,10);
scanarr(b,5);
scanarr(c,20);
}
