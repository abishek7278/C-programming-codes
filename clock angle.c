#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num,i,cout_A=0,cout_B=0;
  char *str;
  scanf("%d",&num);
  str=(char*)malloc(sizeof(char));
  scanf("%s",str);
  for(i=0;i<num;i++)
  {
    if(str[i]=='A')
      cout_A++;
    else if(str[i]=='B')
      cout_B++;
  }
  if(cout_A>cout_B)
    printf("A");
  else if(cout_A<cout_B)
    printf("B");
  else
    printf("Coalition government");
  return 0;
}

