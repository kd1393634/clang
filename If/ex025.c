#include <stdio.h>
main()
{
	char ch;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c",&ch);
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
	}
	else {
		if (ch >= '0' && ch <= '9') {
			printf("”Žš‚Å‚·\n");
		}
		else {
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
		}
	}
		
}