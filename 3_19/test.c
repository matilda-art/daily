#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, temp;
//	printf("请输入三个数：");
//		scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("三个数从大到小为：%d %d %d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for(i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a, b, temp;
//	scanf("请输入两个数：%d %d", &a, &b);
//	while (b != 0) {
//		temp = a%b;
//		a = b;
//		b = temp;
//	}
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 4;
//	int c = 100;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (a%b == 0 & a%c != 0)
//		{
//			printf("闰年:%d\n", a);
//		}
//		int d = 400;
//		if (a%d == 0)
//		{
//			printf("闰年:%d\n", a);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() 
//{
//	int i, j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 1)
		printf("奇数\n");
	else
		printf("偶数\n");
	return 0;
}