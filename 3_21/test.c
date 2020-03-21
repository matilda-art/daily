#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//

//#include <stdio.h>
//
//int main()
//
//{
//
//	int num[10];
//
//	int max = num[0];
//
//	int i = 0;
//
//	for (i = 0; i<10; i++)
//
//	{
//
//		printf("请输入第%d个数: ", i + 1);
//
//		scanf("%d", &num[i]);
//
//		if (num[i]>max)
//
//			max = num[i];
//
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//
//}

#include <stdio.h>
int main()
{
	int i, j, k;
	int n = 9;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%d*%d=%d", i, j, k);
		}
		printf("\n");
	}
	return 0;
}