#include <stdio.h>
main()
{
	char ch;
	printf("���������:");
	scanf("%c",&ch);
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
	}
	else {
		if (ch >= '0' && ch <= '9') {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
		
}