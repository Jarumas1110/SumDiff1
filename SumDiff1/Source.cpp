#include<stdio.h>
int main()
{
	int n[10], i,sum1=0,sum2=0;
	printf("Data in array : ");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &n[i]);
		if (n[i] % 2 != 0)
		{
			sum1 += i;	//���˹��Ţ���
		}
		else
		{
			sum2 += i;	//���˹��Ţ���
		}
	}
	int sum = sum1 - sum2;
	printf("Result : %d",sum);
}