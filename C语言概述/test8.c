/**
 * ��C������,�������Ե�����һ������,��дһ������,����һ����Ϊone_three()�ĺ���,
 * �ú�����һ�д�ӡ����"one", �ٵ��õ�2������two(),Ȼ������һ�д�ӡ����"three".
 * two()������һ����ʾ����"two",main()�����ڵ���one_three()����ǰҪ��ӡ����"starting now:"
 * ���ڵ�����Ϻ���ʾ����"done!",���,�ó�������Ӧ������ʾ
 * starting now:
 * one
 * two
 * three
 * done! 
 */
 
#include<stdio.h>

int two(void)
{
	printf("two\n");
	
	return 0;
}

int one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
	
	return 0;
}

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!");
	
	return 0;
}
