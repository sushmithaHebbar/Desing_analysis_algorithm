#include<stdio.h>
#define MAX 50
int i,j,m,n,w[MAX],p[MAX],x[MAX];
double ratio[MAX];
void greedyKnapsack(int n,int m,int w[] ,int p[])
{
	for(i=0;i<n;i++)
	{
		ratio[i]=(double)p[i]/w[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ratio[i]<ratio[j])
			{	
				double temp=ratio[i];
				ratio[i]=ratio[j];
				ratio[j]=temp;
				int temp2=w[i];
				w[i]=w[j];
				w[j]=temp2;
				temp2=p[i];
				p[i]=p[j];
				p[j]=temp2;
			}
		}
	}
	int currentWeight=0;
	double maxprofit=0.0;
	for(i=0;i<n;i++)
	{
	
		if(currentWeight+w[i]<=m)
		{
			x[i]=1;
			currentWeight+=w[i];
			maxprofit+=p[i];
		}
		else
		{
			x[i]=(m-currentWeight)/(double)w[i];
			maxprofit+=x[i]*p[i];
			break;
		}
	}
		printf("Optimal Solution:%.1f\n",maxprofit);
		printf("solution vector:");
		for(i=0;i<n;i++)
		{
			printf("%d\t",x[i]);
		}
	
}
int main()
{
	int i,m,n,w[MAX],p[MAX];
	printf("Enter the numeber of elements:");
	scanf("%d:",&n);
	printf("Enter the max of capacity:");
	scanf("%d:",&m);
	printf("Enter the objects weights:");
	for(i=0;i<n;i++){
		scanf("%d",&w[i]);
	}
	printf("Enter the objects profit:");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	greedyKnapsack(n,m,w,p);
	return 0;
}
	


	
	
     
                                                                                                                                            
