#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ�������ӡ1 - 100֮������3�ı���������
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

//��
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//		printf(" % d ", i);
//	return 0;
//}



//���������������������������Լ��

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
//��С������=m*n\���Լ��

//��ӡ1000�굽2000��֮��Ĺ���
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



//��ӡ100-200֮�������
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




//����������������Խ���3���Ӻ��Զ��ػ�
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	printf("�����롰������,������Խ���3���Ӻ��Զ��ػ�!\n");
//	system("shutdown -s -t 180");
//	while (1)
//	{
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
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