#include <stdio.h>
#include <float.h> 

/**
 * C数据类型
 * 1.基本类型
 *   整数类型和浮点类型
 * 2.枚举类型
 *   算术类型,被用来定义在程序中只能赋予其一定的离散整数值的变量
 * 3.void类型
 *   类型说明符void表明没有可用的值
 * 4.派生类型
 *   指针类型,数组类型,结构类型,共用类型和函数类型 
 */ 

int main()
{
	printf("int 存储大小: %lu \n", sizeof(int));
	printf("float 存储最大字节数: %lu \n", sizeof(float));
	printf("float 最小值: %E \n", FLT_MIN);
	printf("float 最大值: %E \n", FLT_MAX);
	printf("精度值: %d \n", FLT_DIG);
	return 0;
} 
