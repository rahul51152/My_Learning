#include<stdio.h>
void main(){
int a[10];
int max=0,min=0;
for(int i=0;i<10;i++){
scanf("%d",&a[i]);
}

min=a[0];
for(int i=0;i<10;i++){
    if(a[i]>max){
     max=a[i];
}
     if(a[i]<min){
    min=a[i];
}

}
printf(" max value : %d\n",max);
printf("min value :%d\n",min);
}




