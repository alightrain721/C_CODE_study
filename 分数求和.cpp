//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果.
#include<stdio.h>
int main()
{
	int a = 1;
	int i = 0;
	double sum = 0.0;
	for (int i = 1; i <= 100; i++)
	{
		sum = sum + 1.0*a / i;
		a = -a;
	}
	printf("%lf\n", sum);
	return 0;
}