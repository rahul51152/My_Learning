#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<signal.h>
void signalhandler(int signalvalue);

int main(void){
	int i;
	int x;

	signal(SIGINT, signalhandler);
	srand(clock());

	for(i=1;i<=100;i++){
		x=1+rand()%50;

		if(x==25){
			raise(SIGINT);
		}
		printf("%4d",i);
		if(i%10 == 0){
			printf("\n");
		}
	}
	return 0;
}

void signalhandler(int signalvalue){
	int response;
	printf("%s%d%s\n%s","\n interrupt signal (",signalvalue,") received.","do you wish to continue(1 = yes or 2 =no ");
	scanf("%d",&response);

	while(response != 1 && response!=2){
		printf("(1 = yes or 2 = no)? ");
		scanf("%d",&response);
	}

	if(response == 1){
		signal(SIGINT,signalhandler);
	}
	else{
		exit(EXIT_SUCCESS);
	}
}


