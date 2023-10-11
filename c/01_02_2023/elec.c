#include<stdio.h>
void main()
{
int unit,ran,phase; 
printf("Unit : ");
scanf("%d",&unit);
printf("For domestic => 0\nFor commercial => 1\n");
scanf("%d",&ran);
printf("-------------------------\n");
printf("For single phase => 0\nFor three phase => 1\n");
scanf("%d",&phase);
printf("-------------------------\n");


if(ran==0 && phase==0)
 {
   if(unit<=50)
    {
  
      printf("your bill is %f:\n",unit*1.45);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",unit*1.45+10+20);
    }

    if(unit>50 && unit<=100)
    {
  
      printf("your elec. bill is %f:\n",50*1.45+(unit-50)*2.85);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",50*1.45+(unit-50)*2.85+10+20);
    }

    if(unit>100 && unit<=200)
    {
  
      printf("your elec. bill is %f:\n",50*1.45+50*2.85+(unit-100)*3.95);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",50*1.45+50*2.85+(unit-100)*3.95+10+20);
    }

    if(unit>=200 && unit<=334)
    {
  
      printf("your elec. bill is %f:\n",50*1.45+50*2.85+50*3.95+(unit-200)*4.5);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",50*1.45+50*2.85+50*3.95+(unit-200)*4.5+10+20);
     }

    if(unit>=334)
    {
  
      printf("your elec. bill is %f:\n",50*1.45+50*2.85+50*3.95+(unit-200)*4.5);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",50*1.45+50*2.85+50*3.95+(unit-200)*4.5+10+0.06*unit);
    }
}




if(ran==0 && phase==1)
 {

   if(unit<=50)
    {
  
      printf("your bill is %f:\n",unit*1.45);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",unit*1.45+10+50);
    }

    if(unit>50 && unit<=100)
    {
  
      printf("your elec. bill is %f:\n",50*1.45+(unit-50)*2.85);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",50*1.45+(unit-50)*2.85+10+50);
    }
    if(unit>100 && unit<=200)
    {
  
      printf("your elec. bill is %f:\n",50*1.45+50*2.85+(unit-100)*3.95);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",50*1.45+50*2.85+(unit-100)*3.95+10+50);
    }

    if(unit>=200 && unit<=840)
    {
  
      printf("your elec. bill is %f:\n",50*1.45+50*2.85+50*3.95+(unit-200)*4.5);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",50*1.45+50*2.85+50*3.95+(unit-200)*4.5+10+50);
     }

    if(unit>=840)
    {
  
      printf("your elec. bill is %f:\n",50*1.45+50*2.85+50*3.95+(unit-200)*4.5);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",50*1.45+50*2.85+50*3.95+(unit-200)*4.5+10+0.06*unit);
    }
}


if(ran==1 && phase==0)
 {

    if(unit<=100)
    {
  
      printf("your elec. bill is %f:\n",100*3.95);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",100*3.95+20+50);
    }
    if(unit>=100 && unit <=840)
    {
  
      printf("your elec. bill is %f:\n",100*3.95+(unit-100)*7);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",100*3.95+(unit-100)*7+20+50);
    }
    if(unit>=840)
    {
  
      printf("your elec. bill is %f:\n",100*3.95+(unit-100)*7);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",100*3.95+20+0.06*unit);
    }

}

if(ran==1 && phase==1)
 {

    if(unit<=100)
    {
  
      printf("your elec. bill is %f:\n",100*3.95);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",100*3.95+20+100);
    }
    if(unit>=100 && unit <=1665)
    {
  
      printf("your elec. bill is %f:\n",100*3.95+(unit-100)*7);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",100*3.95+(unit-100)*7+20+100);
    }
    if(unit>=1665)
    {
  
      printf("your elec. bill is %f:\n",100*3.95+(unit-100)*7);
      printf("you also pay with service charges");
      printf("total amount is : %f\n",100*3.95+20+0.06*unit);
    }

}

}
