#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int un, i;
	srand(time(0));
	// rand(); //rand()の空読み
	un = rand() % 5 + 1;
	printf("今日のあなたの運勢は、");
	for (i = 0; i < un; i++) {
		printf("☆");
	}
	printf("です。\n");
}