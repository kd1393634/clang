#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int k;
	srand(time(0));
	// rand(); //rand()の空読み
	k = rand() % 100 + 1;
	if (k <= 30) {
		printf("かいしんのいちげき!\n");
	}
	else {
		printf("通常攻撃\n");
	}

}