#include <stdio.h>
main()
{
	int m;
	printf("������͂���:");
	scanf("%d", &m);
	if (m == 2) {
		printf("�ŏI����28���ł�\n");
	}
	else {
		if (m == 4 || m == 6 || m == 9 ||m== 11) {
		}
		else {
			printf("�ŏI����31���ł�\n");
		}
	}
}