#include"file.h"

void link(){
	struct node *new;
	int n;
	FILE *fd;
	printf("how many data you want to save ? ");
	printf("Eneter the number : ");
	scanf("%d",%n);
	new = malloc(sizeof(struct node));
	printf("Enter the data :");
	fd=fopen("list.txt","a");
	scanf("%d",&new->data);
	fprintf(fd,"%d",new->data);
	fclose(fd);
	new->pre=NULL;
	new->next=NULL;
	start=new;
	ptr=new;
	for(int i=1;i<n;i++){
		new=malloc(sizeof(struct node));
		printf("Enter the data : ");
		fd=fopen("list.txt","a");
		scanf("%d",&new->data);
		fprintf(fd,"%d",&new->data);
		fclose(fd);
		ptr->next=new;
		new->next=NULL;
		new->pre=ptr;
		ptr=new;
	}
}



