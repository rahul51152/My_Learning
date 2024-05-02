#include<stdio.h>
void main()
{
int a,b,c,d,e,f, sum;
printf("enter the prize  : ");
scanf("%d",&a);
printf("enter the prize  : ");
scanf("%d",&b);
printf("enter the prize  : ");
scanf("%d",&c);
printf("enter the prize  : ");
scanf("%d",&d);
printf("enter the prize  : ");
scanf("%d",&e);
printf("enter the prize  : ");
scanf("%d",&f);
if(a>b && a>c && a>d && a>e && a>f){
       if(b>c && b>d && b>e && b>f){
              if(c>d && c>e && c>f){
sum = a+b+c;
printf("%d",sum);
}
}
}

if(a>b && a>c && a>d && a>e && a>f){
       if(b>c && b>d && b>e && b>f){
              if(d>c && d>e && d>f){
sum = a+b+d;
printf("%d",sum);
}
}
}
if(a>b && a>c && a>d && a>e && a>f){
       if(b>c && b>d && b>e && b>f){
              if(f>d && f>e && f>c){
sum = a+b+f;
printf("%d",sum);
}
}
}

if(a>b && a>c && a>d && a>e && a>f){
       if(b>c && b>d && b>e && b>f){
              if(e>d && e>f && e>c){
sum = a+b+e;
printf("%d",sum);
}
}
}

if(a>b && a>c && a>d && a>e && a>f){
       if(c>b && c>d && c>e && c>f){
              if(d>b && d>e && d>f){
sum = a+d+c;
printf("%d",sum);
}
}
}
if(a>b && a>c && a>d && a>e && a>f){
       if(c>b && c>d && c>e && c>f){
              if(e>b && e>d && e>f){
sum = a+e+c;
printf("%d",sum);
}
}
}

if(a>b && a>c && a>d && a>e && a>f){
       if(d>c && d>b && d>e && d>f){
              if(e>c && e>b && e>f){
sum = a+d+e;
printf("%d",sum);
}
}
}

if(a>b && a>c && a>d && a>e && a>f){
       if(f>c && f>b && f>e && f>d){
              if(e>c && e>b && e>f){
sum = a+f+e;
printf("%d",sum);
}
}
}

if(b>c && b>c && b>d && b>e && b>f){
       if(c>a && c>d && c>e && c>f){
              if(d>b && d>e && d>f){
sum = b+c+d;
printf("%d",sum);
}
}
}

if(b>c && b>c && b>d && b>e && b>f){
       if(e>a && e>d && e>c && e>f){
              if(d>b && d>e && d>f){
sum = b+e+d;
printf("%d",sum);
}
}
}
if(b>c && b>c && b>d && b>e && b>f){
       if(f>a && f>d && f>c && f>e){
              if(d>b && d>e && d>f){
sum = b+f+d;
printf("%d",sum);
}
}
}

if(b>c && b>c && b>d && b>e && b>f){
       if(e>a && e>d && e>c && e>f){
              if(f>b && f>c && f>d){
sum = b+e+f;
printf("%d",sum);
}
}
}


if(c>b && c>a && c>d && c>e && c>f){
       if(d>c && d>b && d>e && d>f){
              if(e>c && e>b && e>f){
sum = c+d+e;
printf("%d",sum);
}
}
}

if(d>b && d>c && d>a && d>e && d>f){
       if(f>c && f>b && f>e && f>d){
              if(e>c && e>b && e>f){
sum = d+f+e;
printf("%d",sum);
}
}
}

if(c>b && c>c && c>d && c>e && c>f){
       if(f>c && f>b && f>e && f>d){
              if(e>c && e>b && e>f){
sum = c+f+e;
printf("%d",sum);
}
}
}
if(c>b && c>c && c>d && c>e && c>f){
       if(f>c && f>b && f>e && f>d){
              if(d>c && d>b && d>f){
sum = c+f+d;
printf("%d",sum);
}
}
}
}


