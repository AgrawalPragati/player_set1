#include<stdio.h>
#include<string.h>
void main()
{
	char str[15];
	scanf("%s",str);
	if(strcmp("Saturday",str)==0 || strcmp("saturday",str)==0 || strcmp("Sunday",str)==0 || strcmp("sunday",str)==0 )
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
