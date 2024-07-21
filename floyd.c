#include<stdio.h>
#include<omp.h>
#include<time.h>
int min(int a,int b)
{
	return(a<b)?a:b;
}
void floyd(int w[10][10],int n)
{
	int i,j,k;
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
			w[i][j]=min(w[i][j],w[i][k]+w[k][j]);
			}
		}
	}
}
int main()
{
	int i,j,a[10][10],n;
	double time_taken;
	clock_t start,end;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enetr the adjacency matrix:\n");
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				
				scanf("%d",&a[i][j]);
			}
		}
		start=clock();
		floyd(a,n);
		end=clock();
		printf("All pair of the shortest path:\n");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
			printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		time_taken=end-start;
		printf("total time taklen to complete:%.1f msec",time_taken);
		return 0;
}


