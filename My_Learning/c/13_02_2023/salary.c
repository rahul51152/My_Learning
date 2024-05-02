#include<stdio.h>
void main() {
int n,lev,sal,tot, cut;
printf("How many employes working in r the company : ");
scanf("%d",&n);
printf("Enter employ salary per month : ");
scanf("%d",&sal);
printf("considering sunday leave of the employe is : 6\n");
for( int i=1;i<=n;i++){
printf("enter the leave of %d employe : ",i);
scanf("%d",&lev);
if(lev>6){
cut=(lev-6)*sal/30;
tot = sal-cut;
printf("your salari is : %d\n",tot);
}
else 
printf("your salary is : %d\n",sal);
}
}



