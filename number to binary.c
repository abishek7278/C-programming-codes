#include <stdio.h>
int binary_conversion(int);
int main()
{
  int num;
  long int bin;
  scanf("%d", &num);
  bin = binary_conversion(num);
  printf("The binary equivalent of %d is %ld\n", num, bin);
  return 0;
}
int binary_conversion(int num)
{
  int rem;
  long int multi=0;
  while(num!=0)
  {
    rem=num%2;
    multi=multi*10+rem;
    num=num/2;
  }
  return multi;
}
