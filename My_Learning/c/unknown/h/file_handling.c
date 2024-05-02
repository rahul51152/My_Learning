#include<stdio.h>
#include<stdlib.h>
 int n,a;

void short_num(){
           int q[5];
	FILE *fp;
	fp= fopen("ram.txt","r+");
	for(int i=0;i<n;i++){
			fscanf(fp,"%d\n",&q[i]);
       			printf("%d\n",q[i]);      
                    
	}
	for(int j=0;j<n;j++){
		for(int k=0;k<n;k++){
			if(q[j]<q[k]){
				int temp=q[j];
				q[j]=q[k];
				q[k]=temp;	
			}
		}
	}



	printf("shorted number :\n");
	for(int i=0;i<n;i++){
       		printf("%d\n",q[i]);
	}  
	fclose(fp);
}





void  main(){
          
	printf("How many number you are enter in the file :");
	scanf("%d",&n);
	FILE *fp;
	fp= fopen("ram.txt","w");
	for(int i=0;i<n;i++){
		printf("Enter %d number  : ",i+1);
		scanf("%d",&a);
		fprintf(fp,"%d\n",a);
	}
	fclose(fp);
	short_num();
}

