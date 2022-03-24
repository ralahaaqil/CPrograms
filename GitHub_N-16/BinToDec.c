#include <stdio.h>

int btod(int bin);

int main()
{
	int bin;
	printf("Enter the binary number \n");
	scanf("%d",&bin);
	int ans = btod(bin);
	printf("The answer is: %d \n",ans);
	return 0;
}
int btod(int bin)
{
	if (bin == 0)
	{
		return 0;
	}
	else
	{
		return btod(bin/10)*2+(bin%10);
	}
}
