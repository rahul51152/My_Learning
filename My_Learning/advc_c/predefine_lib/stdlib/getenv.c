#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main(){
	char *str = NULL;
	assert((str = getenv("HOME"))!= NULL);
	printf("value of \"HOME Enviroment Variable\": %s\n",str);
	
	assert((str = getenv("PATH"))!= NULL);
        printf("value of \"PATH Enviroment Variable\": %s\n",str);

	assert((str = getenv("LOGNAME"))!= NULL);
        printf("value of \"LOGNAME Enviroment Variable\": %s\n",str);

	assert((str = getenv("JASON"))!= NULL);
        printf("value of \"JASON Enviroment Variable\": %s\n",str);

	return 0;
}
