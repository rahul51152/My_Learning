#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
        struct node *next;          // pointer to next item
        int data;                                       // some data
}node;


int main() {
        node *head, *temp;


        // first indicate that the list has nothing in it
        // ... this is done by setting the list to point to nothing
        head = NULL;

        // now populate the list
        for (int i = 0; i < 3; i++) {
                temp = malloc(sizeof(node));                        // allocate some memory for the new list item
                temp->data = i;                                                         // set the list item's data to the loop count so that we can see where it is in the list
                temp->next = head;                                          // this will insert at the FRONT of the list
                head = temp;                                                        // and set the list head to the newly created list item
        }

        // now let's see what we got
        temp = head;                                                                // initialize our temporary variable to the head of the list
        while (temp != NULL) {                                                  // keep going until we've reach the end
                printf("list item: \n\tcurrent is %p\n\tnext is %p\n\tdata is %d\n", temp, temp->next, temp->data);
                temp = temp->next;                                                      // move to the next item in the list
        }

        // NOTE: you can see that a new data item is inserted at the FRONT of the list. In fact you can insert the item anywhere
        // but it becomes more compilcated (and error prone) and it is slower. If you want to do this, it's better to use a doubly linked list
        // I'll look at this next
        return 0;
}
