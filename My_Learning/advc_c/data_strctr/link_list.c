#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	char data;
	struct node *next;
}node_t;

typedef node_t *listnodeptr;

void intertatbegining(listnodeptr *head,char val){
	listnodeptr new_node =  malloc(sizeof(node_t));
	new_node->data=val;
	new_node->next=*head;
	*head = new_node;
}

void insertanend(listnodeptr *head, char val){
	listnodeptr current = *head;

	if(current != NULL){
		while(current->next!=NULL){
			current= current->next;
		}
		current->next = malloc(sizeof(node_t));
		current->next->data=val;
		current->next->next=NULL;
	}
	else{
		current = malloc(sizeof(node_t));
		current->data = val;
		current->next =NULL;
		*head = current;
	}
}

void insert (listnodeptr *head, char value){
	listnodeptr newptr;
	listnodeptr prevptr;
	listnodeptr currentptr;

	newptr = malloc(sizeof(node_t));
	if(newptr!=NULL){
		newptr->data = value;
		newptr->next=NULL;

		prevptr = NULL;
		currentptr=*head;

		while(currentptr!=NULL&&value>currentptr->data){
			prevptr = currentptr;
			currentptr = currentptr->next;
		}

		if(prevptr==NULL){
			newptr->next=*head;
		}
		else{
			prevptr->next = newptr;
			newptr->next = currentptr;
		}
	}
	else{
		printf("%c not inserted no memory available\n",value);
	}
}

void deleteatbeginnig(listnodeptr *head){
	listnodeptr tempptr = NULL;

	if(head == NULL){
		return;
	}
	else{
		tempptr = *head;
		*head = (*head)->next;
		free(tempptr);
	}
}

char delete(listnodeptr *head,char value){
	listnodeptr prevptr;
	listnodeptr currentptr;
	listnodeptr tempptr;

	if(value == (*head)->data){
		tempptr=*head;
		*head = (*head)->next;
		free(tempptr);
		return value;
	}
	else{
		prevptr= *head;
		currentptr = (*head)->next;

		while(currentptr!=NULL && currentptr->data!=value){
			prevptr =currentptr;
			currentptr = currentptr->next;
		}

		if(currentptr!=NULL){
			tempptr = currentptr;
			prevptr->next = currentptr->next;
			free(tempptr);
			return value;
		}
	}
	return '\0';
}

void printlist(listnodeptr currentptr){
	if(currentptr == NULL){
		printf("List is empty\n");
	}
	else{
		printf("the list is :\n");
		while(currentptr!=NULL){
			printf("%c-->",currentptr->data);
			currentptr=currentptr->next;
		}
		printf("NULL\n\n");
	}
}


int main(){
	listnodeptr head=NULL;
	int choise = 0;
	char item;
	
	printf("Enter your choise\n"
			"1 to insert an element  into the list in alphabetical order\n"
			"2 to insert an element  at the end of the list\n"
			"3 to insert an element  into the bigining of the list\n"
			"4 to delete an element  from the list\n"
			"5 to delete an element from the begining of the list\n"
			"6 to end.\n");
	printf("::");
	scanf("%d",&choise);

	while(choise !=6){
		switch (choise){
			case 1 :
				printf("Enter a character : ");
				scanf("%c",&item);
				insert(&head,item);
				printlist(head);
				break;
			case 2:
				printf("Enter a character : ");
                                scanf("%c",&item);
                                insertanend(&head,item);
                                printlist(head);
				break;
			case 3:
				printf("Enter a character : ");
                                scanf("%c",&item);
                                intertatbegining(&head,item);
                                printlist(head);
				break;
			case 4:
				if(!isempty (head)){
					printf("enter character to be deleted :");
					scanf("%c",&item);
					if(delete(&head,item)){
						printf("%c deleted\n",item);
						printlist(head);
					}
					else{
						printf("%c  not found \n\n",item);
					}
				}
				else{
					printf("list is empty \n\n");
				}
				break;
			case 5:
				if(!isempty(head)){
					deleteatbeginnig(&head);
					("%c deleted\n", item);
					printlist(head);
				}
				else{
					printf("list is empty\n\n");
				}
				break;
			default :
				printf("invalied choise\n");
				printf("Enter your choise :\n"
						"1 to insert an element into the list\n"
						"2 to deleted an element from the list\n"
						"3 to end");
				break;
		}

		printf("? ");
		scanf("%d",&choise);
	}
	return 0;
}
