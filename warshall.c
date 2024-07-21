#include<stdio.h>
void warshall(int a[10][10] ,int n)
{	
	for(int k=1;k<=n;k++)
	{
		for (int j=1;j<=n;j++)
		{		
			for(int i=1;i<=n;i++)
			{
				a[i][j]=a[i][j]||(a[i][k]&&a[k][j]);
			}
		}
	}
}
int main()
{
	int i,j,n,a[10][10];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n;j++)
		{
			printf("(%d,%d):",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	warshall(a,n);
	printf("All pair of the distance matrix\n");
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n;j++)
		{
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
