#include <stdio.h>
main()
{
	int score = 0;
	char ch, name[20];
	FILE* fp;
	printf("�v���C���[�������:");
	scanf("%s", name);
	while (1) {
	printf("���݂̃X�R�A:%d ('e')\n")
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose(fp);
}