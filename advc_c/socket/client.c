#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>

short socket_create(void){
        short hsocket;
        printf("create the socket\n");
        hsocket =  socket(AF_INET,SOCK_STREAM,0);
        return hsocket;
}
int socket_connect(int hsocket){
	int iretval =-1;
	int serverport = 12345;

	struct sockaddr_in remote = {0};
	remote.sin_addr.s_adde = inet_addr ("127.0.0.1");
	remote.sin_family = AF_INET;
	remote.sin_port = htons(serverport);
	iretval = connect(hsocket,(struct sockaddr *)&remote,sizeof(struct sockaddr));
	return iretval;
}
int socketsend(hsocket,char * rqst,short lenrqst){
	int shortretval = -1;
	struct timeval tv;
	tv.tv_sec = 20;
	tv.tv_usec = 0;

	if(setsockopt(hsocket,SOL_SOCKET,SO_SNDTIMEO,(char *)&tv,size))
