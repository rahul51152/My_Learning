#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<sys/socket.h>

int algorithm(char* buf){
	int i=0;
	char buf1[10];
	while(buf[i]!='+'){
		buf1[i] = buf[i];
		i++;
	}
	int c = atoi(buf1)+atoi(buf+i);
	FILE *f;
	f = fopen("output.txt","a");
	fprintf(f,"%d+%d = %d\n",atoi(buf1),atoi(buf+i),c);
	fclose(f);
	return c;
}



int main(){
	int serv_fd, new_sock;
	struct sockaddr_in serv_addr;
	int otp = 1;
	socklen_t size = sizeof(struct sockaddr);


	serv_fd = socket(AF_INET,SOCK_STREAM,0);
	bzero(&serv_addr,sizeof(serv_addr));

	serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(8080);

	bind(serv_fd, (struct sockaddr*)&serv_addr,sizeof(struct sockaddr));
	listen(serv_fd, 3);
	new_sock = accept(serv_fd,(struct sockaddr*)&serv_addr,&size);
	printf("connected\n");
	char buf[1000];
	while(read(new_sock,(char *)buf,strlen(buf))>0){
		printf("%s",buf);
		int c = algorithm(buf);
		send(new_sock,(int *)&c,sizeof(int),0);
	}
	close(new_sock);
	close(serv_fd);
	return 0;
}
