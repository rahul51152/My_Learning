#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	struct node *next;		// pointer to next item
	struct node *prev;		// pointer to previous item
	int data;					// some data
}node;

int main() {
	node *temp,start;

	start.next = (node*)&start;
	start.prev = (node*)&start;
	start.data = -1;

	for (int i = 0; i < 3; i++) {
		temp = malloc(sizeof(node));			
		temp->data = i;						
		temp->next = start.next;					
		start.next = temp;							
		temp->prev = &start;							
		temp->next->prev = temp;					
	}

	temp = start.next;								
	while (temp != &start) {						
		printf("forward list item:--- current is %p; next is %p; prev is %p; data is %d\n", temp, temp->next, temp->prev, temp->data);
		temp = temp->next;												
	}

	return 0;
}
