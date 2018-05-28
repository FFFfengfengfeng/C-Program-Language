#include <stdio.h>

main()
{
	int c, b;
	b = getchar() != EOF;
	printf("getchar() != EOFµÄÖµÊÇ: %d\n", b);

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		c = getchar();
	}
}