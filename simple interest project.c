#include <stdio.h>

int main()  {
//create variables
float principal,rate,simple_interest;
int time;
//print variables
printf(" Enter principal: ");
scanf("%f", &principal);
printf("enter time: ");
scanf("%d", &time);
printf("enter rate: ");
scanf("%f" ,&rate);
//calculate simple interest
simple_interest=(principal*time*rate)/100;
printf("simple interest is:%.4f \n",simple_interest);

    return 0;
}
