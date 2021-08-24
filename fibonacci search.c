#include<stdio.h>
int main()
{
	int n,i,first,second,sum;
	printf("\n enter no of elements in fibonacci series:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i==0)
		{
			first=i;
			printf("%d",first);
		}
		else if(i==1)
		{
			second=i;
			printf("\t%d",second);
	    }
	  /*  else if(i==2)
	    {
	    	printf("\t%d",i);
		}*/
		else
		{
			sum=first+second;
			first=second;
			second=sum;
			printf("\t%d",sum);
		}
	}
	return 0;
}
