#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <assert.h>

//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "#############";
//	char arr2[] = "adcdef";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}

#include <stdio.h>
void swap(int arr[], int len)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		if ((arr[i] % 2) == 0)
		for (j = i + 1; j < len; j++)
		{
			int temp;
			if ((arr[j] % 2) == 1)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				break;
			}
		}
	}
}
int main()
{
	int i;
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 11 };
	swap(arr, sizeof(arr) / sizeof(arr[0]));
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n");
	return 0;
}