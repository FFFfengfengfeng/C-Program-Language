/**
 * 2.1 简单的C程序示例
 *     
 */ 

#include<stdio.h> // 告诉编译器把stdio.h包含到程序当中,
				  // stdio.h是C编译器软件包的标准部分,
				  // 提供了键盘输入和屏幕输出的支持  
/**
int main(void)  // 函数名 
{
	int num;  // 声明 
	num = 1;  // 赋值 
	
	printf("简单的C语言实例\n");  // 调用一个函数 
	printf("我最喜欢的数字是: %d.\n", num);  // 调用另一个函数 
	
	return 0;  // 返回语句 
} 
*/

/**
 * #include指令和头文件
 * 通过include达到预处理
 * 
 * main()函数
 * C程序一定从main()函数开始执行
 * int 是main函数的返回类型 
 */ 
 
/**
 * 提高程序可读性的技巧
 * 编写可读性的程序是良好的编程习惯
 * 提高程序的可读性有助于理解编程思路
 * 提高程序可读性的技巧,选择有意义的函数名和写注释;
 * 还有一个技巧是用空行来提高程序的可读性; 
 */ 
 
// 进一步使用C
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

// 使用多个函数
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
