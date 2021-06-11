#include <stdio.h>

int main(void) {
	int i,n,sum,rem;
	long int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum=0;
	    rem=0;
	    while(a[i]!=0)
	    {
	        rem=a[i]%10;
	        sum=sum*10+rem;
	        a[i]=a[i]/10;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}
