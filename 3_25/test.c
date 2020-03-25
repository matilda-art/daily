#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//void Swap(int *pa, int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("a=%d b=%d\n", a, b);
//
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d", year);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//﻿
//﻿void mul(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	mul(n);
//	return 0;
//}

//#include <stdio.h>
//
//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	char arr[] = "bit";//数组名是首元素的地址，char的地址是char*
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

#include <stdio.h>

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	
	
	//my_strlen("bit");
	//1 + my_strlen("it");
	//1 + 1 + my_strlen("t");
	//1 + 1 + 1 + my_strlen("");
	//1 + 1 + 1 + 0;
	//3;

	return 0;
}