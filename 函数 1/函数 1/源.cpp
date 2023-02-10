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
//	//将arr1的内容拷贝到arr2中
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
//	printf("交换前a=%d,b=%d\n", a, b);
//	//swap1(a, b);
//	swap2(&a, &b);
//
//	printf("交换后a=%d,b=%d\n", a, b);
//
//	return 0;
//}

////写一个函数可以判断一个数是不是素数
//#include<math.h>
//int is_prime(int n)
//{
//	int x = 0;
//	for (x = 2; x <= sqrt(n); x++)
//	{
//		if (n % x == 0)
//			return 0;
//	}
//	//2~n-1试除
//	//2~sqrt(n)试除
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


//写一个函数判断是不是闰年
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
//		printf("%d是闰年 ", year);
//	else
//		printf("不是闰年");
//	return 0;
//}

//写一个函数,实现一个整形有序数组的二分查找

//数组在传参的时候,传递的不是整个数组
//传递的是数组首元素的地址
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
//		printf("找不到\n");
//	else
//		printf("找到了\n");
//	return 0;
//}
 

// 写一个函数 每次调用此函数,num的值增加1
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

//求最大公约数
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

////求最大公倍数
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


//打印1000年到2000年之间的闰年
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

//// 打印100~200之间的素数
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


