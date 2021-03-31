
#define _CRT_SECURE_NO_WARNINGS 1


//内存操作函数
//memcpy用来拷贝不相关的内存块的



//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
//
//void*my_memcpy(void*dest, const void*src, size_t count)
//{
//	assert(dest&&src);
//	void*ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return dest;
//}


//int main()
//{
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 16);
//	my_memcpy(arr2, arr1, 16);
//	return 0;
//}

//标准规定memcpy函数能够实现不重叠的拷贝
//但是VS底下memcpy函数可以实现重叠拷贝
//不适用于其他编译器


//void* my_mommove(void*dest, const void*str, size_t count)
//{
//	if (dest < str)
//	{
//		while (count--)
//		{
//			(char*)dest = (char*)str;
//			++(char*)dest;
//			++(char*)str;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)str + count);
//		}
//	}
//}
//
//
//
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	int arr[30] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//memmove(arr + 3, arr, 16);
//	my_memmove(arr + 3, arr, 16);
//	return 0;
//}




#include <string.h>
#include <stdio.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4 };
	int arr2[] = { 1, 2, 5, 8, 6 };
	int ret = memcmp(arr1, arr2, 14);
	printf("%d\n", ret);
	return 0;
}