#include <stdio.h>

void jolly(void); // 练习4: jolly函数原型
void deny(void);  // 练习4: deny函数原型
void smile(void); // 练习7: smile函数原型

int main(void) 
{
	/* 练习3: 年龄 */
	int age = 25;

	/* 练习6: toes */
	int toes;

	/* 练习1 */
	printf("Gustav Mahler\n");
	printf("Gustav\nMahler\n");
	printf("Gustav ");
	printf("Mahler");
	getchar();

	/* 练习2: 打印姓名和住址 */
	printf("Gustav Mahler\n");
	printf("ABC");
	getchar();
	
	/* 练习3: 把年龄转换成天数 */
	printf("%d岁现在的天数是%d天", age, age * 365);
	getchar();

	/* 练习4: 函数中打印 */
	jolly();
	jolly();
	jolly();
	deny();
	getchar();

	/* 练习6:  */
	toes = 10;
	printf("toes的值是: %d\n", toes);
	printf("toes两倍的值是: %d\n", toes * 2);
	printf("toes平方的值是: %d\n", toes * toes);
	getchar();

	/* 练习7: 打印smile */
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