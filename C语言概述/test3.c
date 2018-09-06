/**
 * 编写一个程序把你的年龄转换成天数,并表示这两个值,不用考虑闰年的情况 
 */

#include<stdio.h>

int main(void) {
	int age = 12;
	int days = age * 365;
	
	printf("我的年龄是%d岁\n", age);
	printf("天数是: %d", days); 
} 
