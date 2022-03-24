#include <stdio.h>

int main()
{
	int r1,c1,r2,c2;
	printf("Enter the order of matrix 1 \n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the order of matrix 2 \n");
	scanf("%d%d",&r2,&c2);
	if (c1 != r2)
	{
		printf("Matrix multiplication not possible \n");
		return 1;
	}
	int mat1[r1][c1];
	int mat2[r2][c2];
	printf("MATRIX 1 \n");
	for (int ol=0;ol<r1;ol++)
	{
		for (int il=0;il<c1;il++)
		{
			printf("Enter element %d,%d \n",ol+1,il+1);
			scanf("%d",&mat1[ol][il]);
		}
	}
	printf("MATRIX 2 \n");
	for (int ol=0;ol<r2;ol++)
	{
		for (int il=0;il<c2;il++)
		{
			printf("Enter element %d,%d \n",ol+1,il+1);
			scanf("%d",&mat2[ol][il]);
		}
	}
	printf("\n");
	printf("MATRIX 1 \n");
	for (int ol=0;ol<r1;ol++)
	{
		for (int il=0;il<c1;il++)
		{
			printf("%d \t",mat1[ol][il]);
		}
		printf("\n");
	}
	printf("\n");
	printf("MATRIX 2 \n");
	for (int ol=0;ol<r2;ol++)
	{
		for (int il=0;il<c2;il++)
		{
			printf("%d \t",mat2[ol][il]);
		}
		printf("\n");
	}
	int ans[r1][c2];
	for (int ol=0;ol<r1;ol++)
	{
		for (int il=0;il<c2;il++)
		{
			ans[ol][il] = 0;
			for (int k=0;k<c1;k++)
			{
				ans[ol][il] = ans[ol][il] + (mat1[ol][k] * mat2[k][il]);
			}
		}
	}
	printf("\n");
	printf("MULTIPLIED MATRIX \n");
	for (int ol=0;ol<r1;ol++)
	{
		for (int il=0;il<c2;il++)
		{
			printf("%d \t",ans[ol][il]);
		}
		printf("\n");
	}
	return 0;
}
	
