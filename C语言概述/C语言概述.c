/**
 * 2.1 �򵥵�C����ʾ��
 *     
 */ 

#include<stdio.h> // ���߱�������stdio.h������������,
				  // stdio.h��C������������ı�׼����,
				  // �ṩ�˼����������Ļ�����֧��  
/**
int main(void)  // ������ 
{
	int num;  // ���� 
	num = 1;  // ��ֵ 
	
	printf("�򵥵�C����ʵ��\n");  // ����һ������ 
	printf("����ϲ����������: %d.\n", num);  // ������һ������ 
	
	return 0;  // ������� 
} 
*/

/**
 * #includeָ���ͷ�ļ�
 * ͨ��include�ﵽԤ����
 * 
 * main()����
 * C����һ����main()������ʼִ��
 * int ��main�����ķ������� 
 */ 
 
/**
 * ��߳���ɶ��Եļ���
 * ��д�ɶ��Եĳ��������õı��ϰ��
 * ��߳���Ŀɶ��������������˼·
 * ��߳���ɶ��Եļ���,ѡ��������ĺ�������дע��;
 * ����һ���������ÿ�������߳���Ŀɶ���; 
 */ 
 
// ��һ��ʹ��C
/**
int main(void)
{
	int feet, fathoms;
	
	fathoms = 2;
	feet = 6 * fathoms;
	
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6 * fathoms);
	
	return 0;	
} 
*/

// ʹ�ö������
void butler(void);
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes, Bring me some tea and writeable DVDs.\n");
	
	return 0;	
} 
void butler(void)
{
	printf("You rang, sir?\n");
}
