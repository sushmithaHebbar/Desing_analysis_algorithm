#include<stdio.h>
#include<stdlib.h>
int count=0,x[5];
int place(int k,int i)
{
	int j;
	for(j=1;j<k;j++)
	{
		if((x[j]==i)||((abs(x[j]-i))==(abs(j-k))))
			return 0;
	}
		return 1;
}
void n_queen(int k,int n)
{
	int i,j,p;
	for(i=1;i<=n;i++)
	{
	
		if(place(k,i))
		{
			x[k]=i;
			if(k==n)
			{
				count++;
				printf("Soulution:%d\n",count);
			
				for(j=1;j<=n;j++)
				{
					for(p=1;p<=n;p++)
					{
						if(x[j]==p)
						{
							printf("$\t");
						}
						else
						{
							printf("0\t");
						}
					}
					printf("\n");
				}
				printf("\n");
			}
		
			else
			{
				n_queen(k+1,n);
			}
		
		}
	}
}
int main()
{
	int n;
	printf("Enetr the number of elements:");
	scanf("%d",&n);
	n_queen(1,n);
	if(count==0)
		printf("No soulution found\n");
	printf("Solution found :%d\n",count);
	return 0;
}

		
				
						
		


