#include <stdio.h>
#include <float.h> 

/**
 * C��������
 * 1.��������
 *   �������ͺ͸�������
 * 2.ö������
 *   ��������,�����������ڳ�����ֻ�ܸ�����һ������ɢ����ֵ�ı���
 * 3.void����
 *   ����˵����void����û�п��õ�ֵ
 * 4.��������
 *   ָ������,��������,�ṹ����,�������ͺͺ������� 
 */ 

int main()
{
	printf("int �洢��С: %lu \n", sizeof(int));
	printf("float �洢����ֽ���: %lu \n", sizeof(float));
	printf("float ��Сֵ: %E \n", FLT_MIN);
	printf("float ���ֵ: %E \n", FLT_MAX);
	printf("����ֵ: %d \n", FLT_DIG);
	return 0;
} 
