#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// this what is going to be in the queue
typedef struct listitem {
        struct listitem *next;                  // pointer to next item
        struct listitem *prev;                  // pointer to previous item
        int data;                                               // some data
}listitem;

//this is the queue 'header'
typedef struct {
        struct listitem *first;                 // pointer to first item
        struct listitem *last;                  // pointer to last item
} listhdr;

listhdr *start;
listitem *temp;
int count=0;

void enqueue (int data){
	if(count==0){
		listitem *new;
		new = malloc(sizeof(listitem));
		new->data=data;
		temp = new;
		start->first=new;
		new->next = NULL;
		temp->prev=NULL;
		count++;
	}
	else{
		listitem *new;
		new = malloc(sizeof(listitem));
                new->data=data;
		new->prev=temp;
                temp->next = new;
		temp = new;
		start->last = temp;
		count++;
	}
}
int main(){
	enqueue(10);
	printf("data is %d\n",start->first->data);
	enqueue(20);
	printf("data is %d\n",start->last->data);
	return 0;
}
		

		

		

		
