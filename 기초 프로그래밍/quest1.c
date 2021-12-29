//계산기
#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a, b;
	int c, d, e;
	float f;
	int max;

	printf("2개의 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);

	c = a + b;
	d = a - b;
	e = a * b;
	f = (float)a / b;

	if (b < a)
	{
		max = a;
	}

	else
	{
		max = b;
	}

	printf("%d + %d = %d\n", a, b, c);
	printf("%d - %d = %d\n", a, b, d);
	printf("%d * %d = %d\n", a, b, e);
	printf("%d / %d = %.2f\n", a, b, f);

	printf("max : %d\n", max);

	return 0;
}
