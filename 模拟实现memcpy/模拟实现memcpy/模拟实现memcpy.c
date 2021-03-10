// 模拟实现memcpy.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
void test()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[20] = { 0 };
	my_memcpy(arr2, arr1, 16);
}

int main()
{
	test();
	return 0;
}