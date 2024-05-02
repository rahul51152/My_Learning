#include<stdio.h>
void main()
{
int ran,amt;
float com; 
printf("For CPU  press => 0\nFor MONITOR press  => 1\n");
scanf("%d",&ran);
printf("-------------------------\n");
printf("AMOUNT : ");
scanf("%d",&amt);


if(ran==0)
 {
   if(amt<10000)
    {
  
      printf("there are no commission :----- ");
    }

    if(amt>=10000 && amt<20000)
    {
      com = 0.08*amt;
      printf("total commision in  is : %f\n",com);
    }

    if(amt>=25000)
    {
      com = 2000+(amt-25000)*0.1;
      printf("total commision in  is : %f\n",com);
    }
}





if(ran==1)
 {
   if(amt<10000)
    {
      com = 0.05*amt;
      printf("total commision in  is : %f\n",com);
    }

    if(amt>=10000)
    {
      com = 0.05*10000+(amt-10000)*0.08;
      printf("total commision in  is : %f\n",com);
    }
}




}


