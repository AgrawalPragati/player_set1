#include<stdio.h>
#include<math.h>
void main()
{
	int n,sum=0,temp,rem;
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=pow(rem,2)+sum;
		temp=temp/10;
	}
	printf("%d",sum);
}
