#include <stdio.h>
main()
{
	char date[] = "orange";
	int i;
	i = 0;
	while (date[i] != '\0') {
		i++;
	}
	
	printf("������:%s\n", &date[0]);
	printf("��������%d ����\n", i);
}