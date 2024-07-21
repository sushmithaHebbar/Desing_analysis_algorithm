#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 1000
void merge_sort(int arr[] ,int low,int mid ,int high)
{
	int i=low;
	int j=mid+1;
	int k=low;
	int ressarray[MAX];
	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
			ressarray[k++]=arr[i++];
		}
		else
		{
			ressarray[k++]=arr[j++];
		}
	}
	while(i<=mid)
	{
		ressarray[k++]=arr[i++];
	}
	while(j<=high)
	{
		ressarray[k++]=arr[j++];
	}
	for(int m=low;m<=high;m++)
	{
		arr[m]=ressarray[m];
	}
}
void sort(int arr[],int low ,int high)
{
	if(low<high)
	{
	int mid=(low+high)/2;
	sort(arr,low,mid);
	sort(arr,mid+1,high);
	merge_sort(arr,low,mid,high);
	}
}
int main()
{
	int i,j,n,arr[MAX];
	double time_taken;
	clock_t start,end;
	printf("Enetr the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%1000;
	}
	printf("Elements before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	start=clock();
	sort(arr,0,n-1);
	end=clock();
	printf("Elements after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	time_taken=(double)(end-start)/CLOCKS_PER_SEC*1000;
	printf("The total time taken to complete:.%1f msec",time_taken);
	return 0;
}
	
		

	
	
