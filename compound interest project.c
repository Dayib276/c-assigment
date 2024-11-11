#include <stdio.h>
#include <math.h>
int main()
{
 int t, n;
 float p, A ,r ;

  printf("Enter principal:");
  scanf("%f", &p);
  printf("Enter rate : ");
  scanf("%f", &r);
  printf("Enter time :");
  scanf("%d", &t);
  printf("number of times interest applied per time :");
  scanf("%d", &n);

  A=p * pow((1+r/n),n*t);
  printf("Total Amount is %f \n",A);

    return 0;
}
