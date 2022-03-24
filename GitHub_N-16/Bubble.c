#include <stdio.h>

int main()
{
	int a[10];
	int n,i;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter the integers to be sorted \n");
	for (i=0;i<n;i++)
	{
		printf("Enter element %d \n",i+1);
		scanf("%d",&a[i]);
	}
	printf("The given array is: \n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	int il, ol,temp;
	for (ol=0;ol<n-1;ol++)
	{
		for (il=0;il<n-ol-1;il++)
		{
			if (a[il]>a[il+1])
			{
				temp=a[il];
				a[il]=a[il+1];
				a[il+1]=temp;
			}
		}
	}
	printf("The sorted array is: \n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
	
	
	
