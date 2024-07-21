#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void selection_sort(int arr[] ,int n)
{
	int i,j,minIndex;
	for(i=0;i<n-1;i++)
	{
		minIndex=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
			{
			minIndex=j;
			}
		int temp=arr[minIndex];
		arr[minIndex]=arr[i];
		arr[i]=temp;
		}
	}
}
int main()
{
	int i,j,n,arr[1000];
	double time_taken;
	clock_t start ,end;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%1000;
	}
	printf("Elements before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	start=clock();
	selection_sort( arr , n);
	end=clock();
	printf("\nElements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	time_taken=(double)(end-start)/CLOCKS_PER_SEC*1000;
	printf("Time taken to complete sorting:.%1f",time_taken);
	return 0;
}
		
	
