#include<stdio.h>
int main()
{
	int m,n,p,j,num,count=0;;
	scanf("%d%d",&m,&n);
	for(num=m;num<=n;num++)
	{p=0;
		for(j=1;j<=num;j++)
		{
			if(num%j==0)
			{
				p=p+1;
			}
			
		}
		if(p==2)
	      {
		     count++;
	      }
	}
	printf("%d",count);
		
	
return 0;	
}
