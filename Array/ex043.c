#include <stdio.h>
main()
{
	char date[] = "orange";
	int i;
	i = 0;
	while (date[i] != '\0') {
		i++;
	}
	
	printf("文字列:%s\n", &date[0]);
	printf("文字数は%d 文字\n", i);
}