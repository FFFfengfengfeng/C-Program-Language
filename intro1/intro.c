#include <stdio.h>

void jolly(void); // ��ϰ4: jolly����ԭ��
void deny(void);  // ��ϰ4: deny����ԭ��
void smile(void); // ��ϰ7: smile����ԭ��

int main(void) 
{
	/* ��ϰ3: ���� */
	int age = 25;

	/* ��ϰ6: toes */
	int toes;

	/* ��ϰ1 */
	printf("Gustav Mahler\n");
	printf("Gustav\nMahler\n");
	printf("Gustav ");
	printf("Mahler");
	getchar();

	/* ��ϰ2: ��ӡ������סַ */
	printf("Gustav Mahler\n");
	printf("ABC");
	getchar();
	
	/* ��ϰ3: ������ת�������� */
	printf("%d�����ڵ�������%d��", age, age * 365);
	getchar();

	/* ��ϰ4: �����д�ӡ */
	jolly();
	jolly();
	jolly();
	deny();
	getchar();

	/* ��ϰ6:  */
	toes = 10;
	printf("toes��ֵ��: %d\n", toes);
	printf("toes������ֵ��: %d\n", toes * 2);
	printf("toesƽ����ֵ��: %d\n", toes * toes);
	getchar();

	/* ��ϰ7: ��ӡsmile */
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	getchar();

	return 0;
}

void jolly()
{
	printf("For he\'s a jolly good fellow\n");
}
void deny()
{
	printf("Which nobody can deny\n");
}
void smile()
{
	printf("Smile!");
}