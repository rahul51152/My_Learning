#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<sys/shm.h>

#define MY_KEY 1992
#define SHM_SIZE 0x1000

int main()
{
  int semId,shmId;
  char *pShm;
  struct sembuf smop;

  semId = semget(MY_KEY,1,0660|IPC_CREAT);
  if(semId < 0)
  {
    printf("Could not create semaphore\n");
    return (1);
  }
  else
  {
    printf("opened a semaphore Id is %d\n",semId);
  }

  semctl(semId,0,SETVAL,0);

  shmId = shmget(MY_KEY,SHM_SIZE,0660|IPC_CREAT);
  if(shmId < 0)
  {
    printf("Could not create shared segment\n");
    return (2);
  }

  /*Attach shared memory segment to process address spce*/
  pShm = shmat(shmId,NULL,0);
  if(!pShm)
  {
    printf("Could not attach shared memory segment.\n");
    return (3);
  }

  /*wait for a token from semaphore 0*/
  smop.sem_num = 0;
  smop.sem_op = -1;
  smop.sem_flg = 0;

  semop(semId,&smop,1); //server is blocked on semaphore
                       //once client ecext semop(increment cntr by 1)
		       //server gets unblocked.....

  /*process the message availabel in shared memory*/
  printf("Got the semaphore\n");
  printf("%s\n",pShm);
}
