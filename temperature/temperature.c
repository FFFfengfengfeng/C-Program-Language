#include <stdio.h>

/*
 * ��ӡ���϶��뻪�϶������ձ�
 */
main() 
{
	float fahr, celsius;
	float lower, upper, step;
	float sheshi, huashi;

	// �¶ȱ�����
	lower = 0;
	// �¶ȱ�����
	upper = 300;
	// ����
	step = 20;

	fahr = lower;
	sheshi = lower;

	printf("%3s\t%6s\n", "����", "����");
	while (fahr <= upper) 
	{
		celsius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	printf("---------------------\n");
	printf("%3s\t%6s\n", "����", "����");
	while (sheshi <= upper)
	{
		huashi = sheshi * 9.0 / 5.0 + 32.0;
		printf("%3.0f\t%6.1f\n", huashi, sheshi);
		sheshi = sheshi + step;
	}
	system("pause");
}