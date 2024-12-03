#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 15;
//	//00000000000000000000000000001111
//	//0x00 00 00 0f
//	int b = 9;
//	//00000000000000000000000000001001
//	//0x00 00 00 09
//	int c = add(a, b);
//	printf("%p\n", &a);
//	printf("%d\n", c);
//	return 0;
//}


//判断大小端的存储
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();
	if (ret)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}


int main()
{
	char a = -1;
	signed b = -1;
	unsigned c = -1;
	printf("%d %d %d", a, b, c);
	return 0;
}