#include <stdio.h>

int main()
{
	int a[10];
	int n,i;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter the integers \n");
	for (i=0;i<n;i++)
	{
		printf("Enter element %d \n",i+1);
		scanf("%d",&a[i]);
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
	int first, last, mid, key;
	first = 0;
	last = n-1;
	printf("Enter the element you are looking for \n");
	scanf("%d",&key);
	while (first <= last)
	{
		mid = (first+last)/2;
		if (key == a[mid])
		{
			printf("Element is found at position %d \n", mid+1);
			return 1;
		}
		else if (key < a[mid])
		{
			last = mid-1;
		}
		else
		{
			first = mid+1;
		}
	}
	printf("Element is not found \n");
}












