#include<stdio.h>
main()
{
	int num, i;
	printf("��������:");
	scanf("%d", &num);
	
	while (num>0) {
		printf("*");
		num--;
	}
}