#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 8080
int main(){
	int status,valread,client_fd;
	char *serv_ip = "127.0.0.1";
	struct sockaddr_in serv_addr;
	char *hello = "hello from client";
	char buffer[1024] = {0};
	if((client_fd = socket(AF_INET,SOCK_STREAM,0))<0){
		printf("\n socket creation error\n");
		return -1;
	}
	bzero(&serv_addr,sizeof(serv_addr));
	serv_addr.sin_family =AF_INET;
	serv_addr.sin_port = htons(PORT);
	if((inet_pton(AF_INET,serv_ip,&serv_addr.sin_addr))<0){
		printf("\ninvalid address/ adress not supported \n");
		return -1 ;
	}
	if((status = connect(client_fd,(struct sockaddr * )&serv_addr,sizeof(serv_addr)))<0){
		printf("\nconnection failed\n");
		return -1;
	}
	send(client_fd,hello,strlen(hello),0);
	printf("hello message sent\n");
	valread = read(client_fd,buffer,1024-1);
	printf("%s\n",buffer);

	close(client_fd);
	return 0;
}	
