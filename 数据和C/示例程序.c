/**
 * C语言中有两大数据类型, 整数类型和浮点数类型 
 */ 
 
#include <stdio.h>
int main(void) 
{
	float weight;
	float value;
	
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	
	scanf("%f", &weight);
	
	value = 1700.0 * weight * 14.5833;
	
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("Your are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
	
	return 0; 
}

/*
	1. float类型可以储存带小数的数字
	2.  
*/
