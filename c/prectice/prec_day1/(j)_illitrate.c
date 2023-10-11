#include<stdio.h>
void main()
{
int pop=80000, men ,women,lit_men,lit_women,ill_men,ill_women;
printf("population of the town : %d\n", pop);
men= 52*800;
printf("total number of men in the town :  %d\n",men);
women = pop-men;
printf("total number of women in the town : %d\n",women);
lit_men=35*416;
printf("total number of litterate men in the town : %d\n",lit_men);
lit_women=13*384;
printf("total number of litterate women in the town : %d\n",lit_women);
ill_men=men-lit_men;
ill_women=women-lit_women;
printf("total number of illitterate men in the town : %d \n",ill_men);
printf("total number of illitterate women in the town : %d\n",ill_women);
}
