#include<stdio.h>
void main(){
	int age,x,h,l;
	printf("Enter of age of the man/female : ");
	scanf("%d",&age);
	printf("male press :1,female press : 2 --> :" );
	scanf("%d",&x);
	printf("health is excellent press : 1,health is poor press : 2 -->");
	scanf("%d",&h);
	printf("leave in city press : 1 ,leave in vilage press : 2 --> ");
	scanf("%d",&l);
	if(25<age && age<35 && h==1 && l==1 && x==1 ){
		printf("premium : 4000\n");
		printf("policy amount can't exceed : 2 lakhs\n");
	}
	
	else if(25<age && age<35 && h==1 && l==1 && x==2 ){
                printf("premium : 3000\n");
                printf("policy amount can't exceed : 1 lakhs\n");
        }

	else if(25<age && age<35 && h==2 && l==2 && x==1 ){
                printf("premium : 6000\n");
                printf("policy amount can't exceed : 10000\n");
        }
	
	else
	printf("person is not insured \n");
}	
