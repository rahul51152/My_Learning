#include<stdio.h>
#include<unistd.h>
#include<errno.h>

int main(){
 	int ret,i,cnt = 0;
  	errno = 0;
  	int id=fork();
  	if(id==0){
  		ret = nice(19);
  		printf("%d and %d\n",ret,errno);
  		//lowest priority process
  		if(ret == -1 && errno != 0){
    			perror("nice");
  		}
  		else{
  	  		printf("nice value is now %d\n",ret);
  		}
  		for(i=0;i<10;i++){	
		  	printf("Process with nice value %d count = %d\n",ret,cnt);      
	 		cnt++;
		}
  	}
  	else{
        	printf("%d and %d\n",ret,errno);
        	//lowest priority process
        	if(ret == -1 && errno != 0){
        		perror("nice");
        	}
        	else{
          		printf("nice value is now %d\n",ret);
        	}
       		for(i=0;i<10;i++){
                  	printf("Process with nice value %d count = %d\n",ret,cnt);
         		cnt++;
        	}
	}	

}
