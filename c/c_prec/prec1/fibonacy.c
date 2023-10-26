#include <stdio.h>
void febonicy(int n){
    int first=0;
    printf("%d, ",first);
    int second = 1;
    printf("%d, ",second);
    n=n-2;
    while(n--){
        int temp = second;
        second = second + first;
        first = temp;
        printf("%d, ",second);
    }
    printf("\n");
}
int main()
{
    febonicy(10);
    return 0;
}
