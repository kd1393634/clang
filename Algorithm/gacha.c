#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int g;
	srand(time(0));
	g = rand() % 99 + 1;
	if (g <= 12) {
		printf("�X�[�p�[���A");
	}
	else {
		printf("���A\n");
	}

}