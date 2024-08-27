#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个代码打印1 - 100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//或
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//		printf(" % d ", i);
//	return 0;
//}



//给定两个数，求这两个数的最大公约数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = a > b ? b : a;
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int temp = 0;
//	scanf("%d%d", &a, &b);
//	while (temp = a % b)
//	{
//		a = b;
//		b = temp;
//	}
//	printf("%d", b);
//	return 0;
//}
//最小公倍数=m*n\最大公约数

//打印1000年到2000年之间的闺年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			if (i % 400 == 0)
//			{
//				printf("%d ", i);
//				count++;
//			}
//			else if (i % 100 != 0)
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}



//打印100-200之间的素数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//




//输入我是猪，否则电脑将在3分钟后自动关机
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	printf("请输入“我是猪”,否则电脑将在3分钟后自动关机!\n");
//	system("shutdown -s -t 180");
//	while (1)
//	{
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char ch1 [] = "hello,world";
//	char ch2[20] = {0};
//	strcpy(ch2, ch1);
//	printf("%s", ch2);
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char ch1[] = "hello,world";
//	memset(ch1, 'x', 5);
//	printf("%s", ch1);
//}