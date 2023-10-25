#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<string.h>
#include<netinet/in.h>
#include<sys/types.h>
#include<arpa/inet.h>
struct node {
	int num1;
	int num2;
};
struct node s;

int main(){
        int server_fd,new_socket;
        ssize_t valread;
        struct sockaddr_in address;
        int otp = 1;
        socklen_t  addrlen = sizeof(address);
        char buffer[1024] = {0};
        char *hello = "hello from server";


        //creating socket file descriptor
        if((server_fd = socket(AF_INET,SOCK_STREAM,0))<0){
                perror("socket failed\n");
                exit(EXIT_FAILURE);
        }
        bzero(&address,sizeof(address));
        if (setsockopt(server_fd, SOL_SOCKET,SO_REUSEADDR | SO_REUSEPORT, &otp,sizeof(otp))) {
                perror("setsockopt");
                exit(EXIT_FAILURE);
        }

        address.sin_family = AF_INET;
        address.sin_port = htons(8080);

        if (bind(server_fd, (struct sockaddr*)&address,sizeof(address))< 0) {
                perror("bind failed");
                exit(EXIT_FAILURE);
        }

        if (listen(server_fd, 3) < 0) {
                perror("listen");
                exit(EXIT_FAILURE);
        }

        if((new_socket = accept(server_fd,(struct sockaddr*)&address,&addrlen))<0){
                perror("accept");
                exit(EXIT_FAILURE);
        }
	printf("connected\n");
	int n;
	read(new_socket,&n,4);
	while(n--){
        	valread = read(new_socket,&s,8);
        	printf("buffer : %d %d \n",s.num1,s.num2);
		int c = s.num1 + s.num2;
        	send(new_socket,(int *)&c,4,0);
        	printf("result message sent\n");
	}
        close(new_socket);
        close(server_fd);
        return 0;
}
