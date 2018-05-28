#include <stdio.h>

/*
* 打印摄氏度与华氏度数对照表
*/
main()
{
	int fahr, celsius;
	int lower, upper, step;

	// 温度表下限
	lower = 0;
	// 温度表上限
	upper = 300;
	// 步长
	step = 20;

	fahr = lower;

	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
		system("pause");
	}
}