#include <stdio.h>

/*
* ��ӡ���϶��뻪�϶������ձ�
*/
main()
{
	int fahr, celsius;
	int lower, upper, step;

	// �¶ȱ�����
	lower = 0;
	// �¶ȱ�����
	upper = 300;
	// ����
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