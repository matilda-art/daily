#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//			i++;
//	}
//	return 0;
//}

#include <stdio.h>
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));
	}
}

//#include <stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

