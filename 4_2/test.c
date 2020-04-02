#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//
//	int i = 0;
//	int a = 0;
//	int sum = 0;
//	int num = 0;
//	scanf("%d", &num);
//
//	for (i = 0; i < 5; i++)
//	{
//		a = a * 10 + num;
//		sum = sum + a;
//	}
//
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		printf("%d ", *p);
//		++p;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i, j, k, n;
//	printf("Ë®ÏÉ»¨Êý£º");
//	for (n = 100; n<1000; n++)
//	{
//		i = n / 100;
//		j = n / 10 - i * 10;
//		k = n % 10;
//
//		if (n == i*i*i + j*j*j + k*k*k)
//			printf("%d\n ", n);
//
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	int x = 7;
	for (int i = 0; i < 7; i++)
	{

		for (int j = x; j > 0; j--)
		{
			printf(" ");
		}
		x--;
		for (int m = 0; m <= i * 2; m++)
		{
			printf("*");
		}

		printf("\n");

	}

	int l = 2;
	for (int i = 6; i > 0; i--)
	{
		for (int j = 0; j < l; j++)
		{
			printf(" ");
		}
		l++;
		for (int m = 0; m < i * 2 - 1; m++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}