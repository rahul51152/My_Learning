#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
int main(){
	int listfd,connfd,retval;
	socklen_t clilen;
	struct sockaddr_in cliaddr,servaddr;

	listfd=socket(AF_INET,SOCK_STREAM,0);
	if(listfd<0){
		perror("sock : ");
		exit(1);
	}

	retval=bind(listfd,(struct sockaddr *)&servaddr,sizeof(servaddr));

	listen(listfd,5);

	while(1){
		clilen = sizeof(cliaddr);
		connfd=accept(listfd,(struct sockaddr*)&cliaddr,&clilen);
		printf("client connected\n");
	}
	close(listfd);
}
