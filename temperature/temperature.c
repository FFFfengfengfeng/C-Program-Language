#include <stdio.h>

/*
 * 打印摄氏度与华氏度数对照表
 */
main() 
{
	float fahr, celsius;
	float lower, upper, step;
	float sheshi, huashi;

	// 温度表下限
	lower = 0;
	// 温度表上限
	upper = 300;
	// 步长
	step = 20;

	fahr = lower;
	sheshi = lower;

	printf("%3s\t%6s\n", "华氏", "摄氏");
	while (fahr <= upper) 
	{
		celsius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	printf("---------------------\n");
	printf("%3s\t%6s\n", "华氏", "摄氏");
	while (sheshi <= upper)
	{
		huashi = sheshi * 9.0 / 5.0 + 32.0;
		printf("%3.0f\t%6.1f\n", huashi, sheshi);
		sheshi = sheshi + step;
	}
	system("pause");
}