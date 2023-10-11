#include<stdio.h>
#include"head.h"
int bin_dec(long long num){
        int r=0,deci=0,i=0;
        while(num!=0){
                r=num%10;
                num=num/10;
                deci =deci+r*power(2,i);
                ++i;
        }
        return deci;
}
