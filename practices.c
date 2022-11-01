
//1
//#include <stdio.h>
//
//int main()
//{
//	printf("Practice makes perfect!");
//	return 0;
//}

//7
//#include <stdio.h>
//
//main()
//{
//	//方法一
//	/*int a = 1234;
//	printf("0%o\n", a);
//	printf("0x%X\n", a);*/
//
//	//方法二
//	printf("%#o\n%#X\n", 1234, 1234);
//	return 0;
//}

//19
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	//方法一
//	//int input = 1;
//	//scanf("%d", &input);
//	//printf("%d%d%d%d", input % 10, input /10%10, input /100% 10, input / 1000);
//
//	//方法二
//	int input = 1;
//	scanf("%d", &input);
//	while (input)
//	{
//		printf("%d", input % 10);
//		input = input / 10;
//	}
//
//	return 0;
//}

//28
//#include<stdio.h>
//
//int main()
//{
//	char ch;
//	
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();
//	}
//	return 0;
//}

//11
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	float a;
//	float b;
//	float c;
//	int num;
//	scanf("%d;%f,%f,%f", &num, &a, &b, &c);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, a, b, c);
//	return 0;
//}

//13
//#include <stdio.h>
//#include <string.h>
//int main() 
//{
//	int arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//
//	return 0;
//}

//14
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int year;
//	int month;
//	int date;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\nmonth=%02d\ndate=%02d\n", year, month, date);
//
//	return 0;
//}

//35.1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main() {
//	int a =0;
//	while ((a = getchar()) != EOF)
//	{
//		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
//			{
//				printf("YES");
//			}
//			else
//			{
//				printf("NO");
//			}
//		getchar();
//	}
//	
//	return 0;
//}

//35.2
//int main() {
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
//		{
//			printf("YES");
//		}
//		else
//		{
//			printf("NO");
//		}
//		getchar();
//	}
//
//	return 0;
//}

//29
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int n = 0;
//	int b = 1;
//	int sc = 0;
//	//scanf("%d", &n);
//	if ((sc = scanf("%d", &n)) != EOF)
//	{
//		//getchar();
//		b = a << n;
//		printf("%d\n", b);
//
//	}
//
//	return 0;
//}


//15
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdio.h>
//
//int main() {
//	int a = 1;
//	int b = 1;
//	scanf("a=%d,b=%d", &a, &b);
//	printf("a=%d,b=%d", b, a);
//	return 0;
//}

//16
//#include <stdio.h>
//
//int main() {
//
//
//	int ch = 1;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		printf("%d", ch);
//	}
//	return 0;
//}

//25
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int kg = 1;
//	int cm = 1;
//	float bmi = 1;
//	scanf("%d %d", &kg, &cm);
//	bmi = cm / 100;
//	bmi = bmi * bmi;
//	bmi = kg / bmi;
//	//bmi = kg / ((cm / 100) * (cm / 100));
//	printf("%.2f", bmi);
//	return 0;
//}

//26
//int main() {
//	double r = 1.0;
//	double v = 1.0;
//	scanf("%lf", &r);
//	v = (4.0 / 3.0) * 3.1415926 * (r * r * r);
//	printf("%.3lf", v);
//	return 0;
//}

//38.1
//#include <stdio.h>
//
//int lily(int x)
//{
//	if (x == (x / 10000) * (x % 10000) +  (x / 1000) * (x % 1000) + (x / 100) * (x % 100) + (x / 10) * (x % 10))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main() {
//	int a = 0;
//	int i = 0;
//	int x = 0;
//	for (i = 10000; i<100000; i++)
//	{
//		if (lily(i))
//		{
//			a = i;
//			printf("%d ", a);
//		}
//		continue;
//	}
//	return 0;
//}

//38.2
//#include <stdio.h>
//int main() {
//	int i = 0;
//	for (i = 14609; i < 100000; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 10; j < 100000; j *= 10)
//		{
//			sum += (i / j) * (i % j);
//		}
//		if (sum == i)
//			printf("%d ", sum);
//	}
//	return 0;
//}

//37
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	double price0 = 1;
//	double price = 1;
//	int month = 1;
//	int day = 1;
//	int q = 0;
//
//	scanf("%lf %d %d %d", &price0, &month, &day, &q);
//
//	if (11 == month && 11 == day)
//	{
//		price = price0 * 0.7;
//		if (q == 1 && price > 50)
//		{
//			printf("%.2lf", price = price - 50);
//		}
//		else if (q == 1 && price <= 50)
//		{
//			printf("0");
//		}
//		else
//		{
//			printf("%.2lf", price);
//		}
//	}
//
//	else if (12 == month && 12 == day)
//	{
//		price = price0 * 0.8;
//		if (q == 1 && price >= 50)
//		{
//			printf("%.2lf", price = price - 50);
//		}
//		else if (q == 1 && price <= 50)
//		{
//			printf("0");
//		}
//		else
//		{
//			printf("%.2lf", price);
//		}
//	}
//	else
//		printf("%.2lf", price0);
//	return 0;
//}

//39
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main() {
//	int n = 1;
//	int arr[40] = {0};
//	int i = 0;
//	//输入n 和n组数字
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//找到n组数字中最大的5个
//	//冒泡排序
//	//1组
//	for (i = 0; i < n - 1; i++)
//	{
//		//1趟
//		int j = 0;
//		for (j = 0; j< n - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//
//		}
//	}
//
//	//输出
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

//40
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	char arr[100] = { 0 };
//	int i = 0;
//	int A = 0;
//	int B = 0;
//	gets(arr);
//	for (i = 0; 1<100; i++)
//	{
//		if ('0' == arr[i])
//		{
//			break;
//		}
//		else if ('A' == arr[i])
//		{
//			A ++;
//		}
//		else if ('B' == arr[i])
//		{
//			B ++;
//		}
//	}
//	if (A > B)
//	{
//		printf("A");
//	}
//	else if (A < B)
//	{
//		printf("B");
//	}
//	else
//	{
//		printf("E");
//	}
//	return 0;
//}

//45
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int i = 0;
//	int arr[3] = { 0 };
//	for (i = 0; i<3; i++)
//	{
//		if (~scanf("%d", &arr[i]))
//		{
//		}
//	}
//
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<3 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = arr[j];
//			}
//		}
//	}
//	printf("%d", arr[0]);
//	return 0;
//}

//47
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	char n = 'a';
//	char arr[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	while (~scanf(" %c", &n))
//	{
//		for (i = 0; i<sz; i++)
//		{
//			if (n == arr[i])
//			{
//				printf("%c is an alphabet.\n", n);
//				break;
//			}
//			if (i == sz - 1)
//			{
//				printf("%c is not an alphabet.\n", n);
//			}
//		}
//
//	}
//	return 0;
//}

//53
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double a = 1;
	double b = 1;
	double c = 1;

	while (~scanf("%lf %lf %lf", &a, &b, &c))
	{
		if (0.0 == a)
		{
			printf("Not quadratic equation\n");
		}
		else
		{
			double der = (b*b) - (4 * a*c);
			if (0.0 == der)
			{
				printf("x1=x2=%.2lf\n", (-b) / (2 * a));
			}
			else if (der > 0.0)
			{
				printf("x1=%.2lf;x2=%.2lf\n", (-b - der) / (2 * a), (-b + der) / (2 * a));
			}
			else
			{
				double real = (-b) / (2 * a);
				double vir = (sqrt(-der)) / (2 * a);
				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", real, vir, real, vir);
			}
		}
	}
	return 0;
}