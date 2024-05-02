#include<stdio.h>
void main()
{
int pizza,burger,sandwitch;
int dis1,dis2,dis3,dis4,dis5,dis6,dis7;
int amt,amt1,amt2,amt3,amt4,amt5,amt6,amt7;
int tot1,tot2,tot3,tot4,tot5,tot6,tot7,tot8;
printf("burgere :");
scanf("%d",&burger);
printf("pizza :");
scanf("%d",&pizza);
printf("sandwitch :");
scanf("%d",&sandwitch);
amt=(burger*150+pizza*300+sandwitch*100);
printf("------------------------------------------\n");

if(burger>=5 && pizza*300>=1000 && sandwitch*100>=500)
{
  
  dis1= 0.1*burger*150+0.15*pizza*300+0.2*sandwitch*100;
  amt1=amt-dis1;
  tot1= amt1+amt1*0.12; 
  printf("you have to pay  :  %d(include GST)\n",tot1);
}

if(burger<5 && pizza*300>=1000 && sandwitch*100>=500)
{
  
  dis2= 0.15*pizza*300+0.2*sandwitch*100;
  amt2=amt-dis1;
  tot2= amt2+amt2*0.12; 
  printf("you have to pay  :  %d(include GST)\n",tot2);
}


if(burger<5 && pizza*300<1000 && sandwitch*100>=500)
{
  
  dis3= 0.2*sandwitch*100;
  amt3=amt-dis1;
  tot3= amt3+amt3*0.12; 
  printf("you have to pay  :  %d(include GST)\n",tot3);
}

if(burger<5 && pizza*300>=1000 && sandwitch*100<500)
{
  
  dis4= 0.15*pizza*300;
  amt4=amt-dis1;
  tot4= amt4+amt4*0.12; 
  printf("you have to pay  :  %d(include GST)\n",tot4);
}


if(burger>=5 && pizza*300<1000 && sandwitch*100>=500)
{
  
  dis5= 0.1*burger*150+0.2*sandwitch*100;
  amt5=amt-dis1;
  tot5= amt5+amt5*0.12; 
  printf("you have to pay  :  %d(include GST)\n",tot5);
}

if(burger>=5 && pizza*300<1000 && sandwitch*100<500)
{
  
  dis6= 0.1*burger*150;
  amt6=amt-dis1;
  tot6= amt6+amt6*0.12; 
  printf("you have to pay  :  %d(include GST)\n",tot6);
}
 if(burger>=5 && pizza*300>=1000 && sandwitch*100<500)
{
  
  dis7= 0.1*burger*150+0.15*pizza*300;
  amt7=amt-dis1;
  tot7= amt1+amt1*0.12; 
  printf("you have to pay  :  %d(include GST)\n",tot7);
}

if(burger<5 && pizza*300<1000 && sandwitch*100<500)
{
  
  tot8= amt+amt*0.12; 
  printf("you have to pay  :  %d(include GST)\n",tot8);
}
}

