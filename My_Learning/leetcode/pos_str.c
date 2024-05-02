#include<stdio.h>
int main()
{
    char arr[5]= "abcde";
    int p[5]={4,2,1,3,0};
    int temp;
    for(int i=0;i<5;i++){
        if(p[i]!=i){
            temp = arr[p[i]];
            arr[p[i]] = arr[i];
            arr[i] = temp;
            
            temp = p[i];
            p[i] = p[temp];
            p[temp] = temp;
        
        }
    }
    printf("%s",arr);
    return 0;
}
