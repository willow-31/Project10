#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep��ͷ�ļ�
#include<stdlib.h>//system��ͷ�ļ�
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
		system("cls");//systemִ��ϵͳ����-cls�����Ļ������cls�Ǹ��ַ�����������ͷ�ļ�#include<stdlib.h>
		left++; right--;
		printf("%s\n", arr2);
		Sleep(1000);//���Sleep����ĸ��д��ͷ�ļ�Windows.h
	}
	return 0;
}