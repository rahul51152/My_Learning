#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 8080

struct node {
        int num1;
        int num2;
};
struct node s;

int main(){
        int status,valread,client_fd;
        char *serv_ip = "127.0.0.1";
        struct sockaddr_in serv_addr;
        char *hello = "hello from client";
	int result;
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
	printf("connection done ...");
	int n;
	printf("HOW MANY DATA YOU WANT TO SEND : ");
	scanf("%d",&n);
	send(client_fd,(int *)&n,4,0);
	while(n--){
		printf("Enter the data : ");
		scanf("%d %d",&s.num1,&s.num2);
        	send(client_fd,(struct node *)&s,8,0);
        	printf("message sent\n");
        	read(client_fd,(int *)&result,sizeof(int));
		printf("sum of the given data is : %d\n",result);
	}
        close(client_fd);
        return 0;
}
