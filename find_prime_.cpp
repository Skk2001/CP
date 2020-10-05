#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number between 1 to");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
//			printf("%d",i);
		}
		printf("%d",i);
	}
	return 0;
}

