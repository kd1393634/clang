#include <stdio.h>
main()
{
	int i, sum;
	sum = 0;
	for (i = 1; i <= 10; i++) {
		sum +=i;
		printf("1���� %d�܂ł̘a=%d\n", i, sum);
	}
}