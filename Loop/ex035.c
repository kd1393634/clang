#include <stdio.h>
main()
{
	int num, sum;
	sum = 0;
	while (1) //�������[�v
	{
		printf("��������:");
		scanf("%d", &num);
		if (num == -999) {
			break;//���[�v�E�o
		}
		sum += num;
	}
	printf("���v=%d\n", sum);

}