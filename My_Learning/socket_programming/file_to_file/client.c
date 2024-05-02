#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<unistd.h>
#include<arpa/inet.h>
int main(){
	int client_fd;
	struct sockaddr_in client_addr;
	socklen_t size = sizeof(client_addr);
	client_fd = socket(AF_INET,SOCK_STREAM,0);
	bzero(&client_addr,sizeof(client_addr));
	client_addr.sin_family =AF_INET;
        client_addr.sin_port = htons(8080);
	inet_pton(AF_INET,"127.0.0.1",&client_addr.sin_addr);
	connect(client_fd,(struct sockaddr *)&client_addr,size);
	printf("connction done\n");
	
	FILE *file;
	char buffer[20];
	int result;
	file = fopen("input.txt","r");
	while(fgets(buffer,sizeof(buffer),file)!=NULL){
		send(client_fd,(char *)&buffer,strlen(buffer),0);
		read(client_fd,(int *)&result,sizeof(int));
		printf("--------------------\n");
		printf("\t%s \t= %d\n",buffer,result);
		}
	fclose(file);
	close(client_fd);
	return 0;
}
