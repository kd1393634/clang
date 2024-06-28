#include <stdio.h>
main()
{
	int num, sum;
	sum = 0;
	while (1) //無限ループ
	{
		printf("数を入れて:");
		scanf("%d", &num);
		if (num == -999) {
			break;//ループ脱出
		}
		sum += num;
	}
	printf("合計=%d\n", sum);

}