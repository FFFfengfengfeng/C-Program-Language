#include <stdio.h>

main()
{
	// 用for循环打印华氏与摄氏度对比
	int fahr;

	// 符号常量
	#define LOWER 0
	#define UPPER 300
	#define STEP 20

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
	{
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	system("pause");
}