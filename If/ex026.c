#include <stdio.h>
main()
{
	int m;
	printf("月を入力して:");
	scanf("%d", &m);
	if (m == 2) {
		printf("最終日は28日です\n");
	}
	else {
		if (m == 4 || m == 6 || m == 9 ||m== 11) {
		}
		else {
			printf("最終日は31日です\n");
		}
	}
}