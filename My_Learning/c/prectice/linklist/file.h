#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

struct node {
	struct node *pre;
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *ptr;

