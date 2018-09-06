/**
 * 编写一个程序,生成以下输出
 * For he's a jolly good fellow! 
 * For he's a jolly good fellow! 
 * For he's a jolly good fellow! 
 * Which nobody can deny!
 * 除了main()函数以外,该程序还要调用两个自定义函数,一个名为jolly(),一个名为deny() 
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

