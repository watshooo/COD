#include<stdio.h>
#define N 12
int main()
{
	int i,j,data[N]={8,9,9,9,9,9,1,2,4,2,12,13};
	for(i=0;i<N;i++)
	{
		for(j=N-1;j>i;j--)
		{
			if (data[j]>data[j-1])
			{
				int temp = data[j];
				data[j] = data[j-1];
				data[j-1] = temp;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%5d",data[i]);
	}
	putchar('\n');
	return 1;
}
