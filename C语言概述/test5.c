/**
 * ��дһ������,�����������: 
 * Brazil,Russia,India,China
 * India,China
 * Brazil,Russia
 * ����main()����,�ó���Ҫ���������Զ��庯��:һ����Ϊbr(),
 * ����һ�δ�ӡһ��"Brazil, Russia":
 * ��һ����Ϊic(),����һ�δ�ӡһ��"India, China" 
 */

#include<stdio.h>
void br(void)
{
	printf("Brazil, Russia");	
}

void ic(void)
{
	printf("India, China");
}

int main(void)
{
	br();
	printf(" ");
	ic();
	printf("\n");
	ic();
	printf("\n");
	br();
	
	return 0;
}
