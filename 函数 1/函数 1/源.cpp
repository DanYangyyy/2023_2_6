#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//memset
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr + 2, 'Y', 3);
//	printf("%s", arr);
//	return 0;
//}

//strcpy
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "xxxxxxx";
//	//��arr1�����ݿ�����arr2��
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//void swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰa=%d,b=%d\n", a, b);
//	//swap1(a, b);
//	swap2(&a, &b);
//
//	printf("������a=%d,b=%d\n", a, b);
//
//	return 0;
//}

////дһ�����������ж�һ�����ǲ�������
//#include<math.h>
//int is_prime(int n)
//{
//	int x = 0;
//	for (x = 2; x <= sqrt(n); x++)
//	{
//		if (n % x == 0)
//			return 0;
//	}
//	//2~n-1�Գ�
//	//2~sqrt(n)�Գ�
//	/*for (x = 2; x < n; x++)
//	{
//		if (n % x == 0)
//			return 0;
//	}*/
//	//if (n == x)
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//дһ�������ж��ǲ�������
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//		printf("%d������ ", year);
//	else
//		printf("��������");
//	return 0;
//}

//дһ������,ʵ��һ��������������Ķ��ֲ���

//�����ڴ��ε�ʱ��,���ݵĲ�����������
//���ݵ���������Ԫ�صĵ�ַ
//int binary_search(int *a,int n,int len)
//{
//	int min = 0, max = len - 1;
//	while(min<=max)
//	{
//		int mid = min + (max - min) / 2;
//		if (n > a[mid])
//			min = mid + 1;
//		else if (n < a[mid])
//			max = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	scanf("%d", &x);
//	if (binary_search(arr,x,len) == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ���\n");
//	return 0;
//}
 

// дһ������ ÿ�ε��ô˺���,num��ֵ����1
//void test(int *pnum)
//{
//	++*pnum;
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//	printf("%d\n", num);
//
//	test(&num);
//	printf("%d\n", num);
//
//	test(&num);
//	printf("%d\n", num);
//
//	return 0;
//}
// 

//�����Լ��
//int  main()
//{
//	int a = 0, b = 0;  
//	scanf("%d %d", &a, &b);  //18  24
//	int m = 0;
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	printf("%d", b);
//	return 0;
//}

////����󹫱���
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int	n = a * b;
//	int m = 0;
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	n = n / b;
//	printf("%d", n);
//	return 0;
//}


//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0 )&& (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}

//// ��ӡ100~200֮�������
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for ( j = 2; j <= i; j++)
//		{
//			if (i%j==0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}


