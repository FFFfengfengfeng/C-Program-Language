/**
 * ����о�����, ΢Ц�洦���,��дһ������,�������¸�ʽ�����:
 * Smile!Smile!Smile!
 * Smile!Smile!
 * Smile! 
 */
 
#include<stdio.h>

int smile(int a)
{
	if (a == 1) {
		printf("Smile!\n");
	} else {
		printf("Smile!");
	}
	
	return 0;
}

int main(void)
{
	smile(0);
	smile(0);
	smile(1);
	smile(0);
	smile(1);
	smile(0);
} 
