
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
//	//����һ
//	/*int a = 1234;
//	printf("0%o\n", a);
//	printf("0x%X\n", a);*/
//
//	//������
//	printf("%#o\n%#X\n", 1234, 1234);
//	return 0;
//}

//19
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	//����һ
//	//int input = 1;
//	//scanf("%d", &input);
//	//printf("%d%d%d%d", input % 10, input /10%10, input /100% 10, input / 1000);
//
//	//������
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
#include<stdio.h>

int main()
{
	char ch;
	
	while ((ch = getchar()) != EOF)
	{
		printf("%c\n", ch + 32);
		getchar();
	}
	return 0;
}