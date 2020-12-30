#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep的头文件
#include<stdlib.h>//system的头文件
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char arr1[] = { "hello world!!!!" };
	char arr2[] = { "##############3" };
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		//printf("%d\n", right);
		arr2[right] = arr1[right];
		system("cls");//system执行系统命令-cls清空屏幕，不过cls是个字符？？？？？头文件#include<stdlib.h>
		left++; right--;
		printf("%s\n", arr2);
		Sleep(1000);//这个Sleep首字母大写，头文件Windows.h
	}
	return 0;
}