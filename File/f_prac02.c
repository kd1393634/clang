#include <stdio.h>
main()
{
	int score = 0;
	char ch, name[20];
	FILE* fp;
	printf("score.txt", "r");
	scanf(fp, "%s%d", max_name, maxscore);
	fclose(fp);
	printf("最高得点 名前:%sハイスコア:%d\n", max_name, max_score)
		while (1) {
			printf("現在のスコア:%d ('e')\n")
				ch = getch();
			if (ch == 'e') {
				break;
			}
			score++;
		}
	if (max_score < score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("ハイスコア更新!\n");
	}
}