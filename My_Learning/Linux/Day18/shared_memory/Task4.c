#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>

int main(int argc,char *argv[])
{
  key_t key;
  int shmid;
  char *data;
  int mode;

  if(argc > 2)
  {
    fprintf(stderr,"usage: shmdemo [data_to_write]\n");
    exit(1);
  }

  if((shmid = shmget(111,SHM_SIZE,0644) == -1))
  {
    perror("shmget");
    exit(1);
  }

  data = shmat(shmid,(void *)0,0);
  if(data == (char *)(-1))
  {
    perror("shmat");
    exit(1);
  }

  if(argc == 2)
  {  
    printf("writing to segmet: \"%s\"\n",argv[1]);
    strncpy(data,argc[1],SHM_SIZE);
  }

  printf("segment contains: \"%s\"\n",data);

  if(shmdt(data) == -1)
  {
    perror("shmdt");
    exit(1);
  }
  return 0;
}
