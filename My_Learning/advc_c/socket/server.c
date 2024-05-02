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

int bind_create_socket(int hsocket){
	int iretval = -1;
	int clientport = 12345;

	struct sockaddr_in remote = {0};
	remote.sin_family = AF_INET;
	remote.sin_addr.s_addr = htonl(INADDR_ANY);
	iretval = bind(hsocket,(struct sockaddr *)&remote,sizeof(remote));
	return iretval;
}

int main(int argc,char *argv[]){
	int socket_desc = 0,sock =0,clientlen= 0;
	struct sockaddr_in client;
	char client_message[200] = {0};
	char message[100] = {0};
	const char *pmessage = "hello from jason's server";

	socket_desc =socket_create();
	if(socket_desc == -1){
		printf("could not create socket");
		return 1;
	}
	printf("socket created\n");

	if(bind_create_socket(socket_desc)<0){
		perror("bind failed");
	}
	printf("socket_done\n");

	listen(socket_desc,3);


	while(1){
		printf("waiting for incoming connections ....\n");
		clientlen = sizeof(struct sockaddr_in);
		sock =  accept(socket_desc,(struct sockaddr *)&client,(socklen_t*)&clientlen);
		if(sock<0){
			perror("accept failed\n");
			return 1;
		}

		printf("connection accepted\n");
		memset(client_message,'\0',sizeof(client_message));
		memset(message, '\0',sizeof message);


		if(recv(sock,client_message,200,0)<0){
			printf("rev_failed");
			break;
		}
		printf("client replay : %s\n",client_message);
		if(strcmp(pmessage,client_message)==0){
			strcpy(message,"hi there !");
		}
		else{
			strcpy(message,"Invalied Mesaage !");
		}

		if(send(sock,message,strlen(message),0)<0){
			printf("send failed");
			return 1;
		}
		close(sock);
		sleep(1);
	}
	return 0;
}			
