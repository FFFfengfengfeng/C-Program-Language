/**
 * ��дһ������,�����������
 * For he's a jolly good fellow! 
 * For he's a jolly good fellow! 
 * For he's a jolly good fellow! 
 * Which nobody can deny!
 * ����main()��������,�ó���Ҫ���������Զ��庯��,һ����Ϊjolly(),һ����Ϊdeny() 
 */
 
#include<stdio.h>
void jolly(void);
void deny(void);

int main(void) {
	jolly();
	jolly();
	jolly();
	
	deny();
}

void jolly(void) {
	printf("For he's a jolly good fellow!\n");
}
void deny(void) {
	printf("Which nobody can deny!\n");
} 

