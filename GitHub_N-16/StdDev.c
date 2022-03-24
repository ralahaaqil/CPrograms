#include <stdio.h>
#include <math.h>

int main()
{
	int i,n;
	float a[10],mean,var,sd,sum;
	float *p;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	
	p=a;
	printf("Enter the elements \n");
	for (i=0;i<n;i++)
	{
		scanf("%f",p);
		p++;
	}
	p=a;
	printf("The elements are: \n");
	for (i=0;i<n;i++)
	{
		printf("%f ",*p);
		p++;
	}
	p=a;
	sum=sd=var=mean=0;
	for (i=0;i<n;i++)
	{
		sum=sum+(*p);
		p++;
	}
	mean = sum/n;
	p=a;
	for (i=0;i<n;i++)
	{
		var = var + pow((*p-mean),2);
		p++;
	}
	var = var/n;
	sd = sqrt(var);
	printf("Sum: %f \t Mean: %f \t Var: %f \t S.D: %f \n",sum,mean,var,sd);
	return 0;
}
