#include <stdio.h>
main()
{
	char ch;
	printf("���������:");
	scanf("%c", &ch);
	if(ch>='A'&& ch<='Z'){//�啶���Ȃ珬�����ɕϊ�
		printf("�ϊ������%c\n", ch + 0x20);

	}
	else {
		if(ch>='a'&& ch<='z'){//�������Ȃ�啶���ɕϊ�
			printf("�ϊ������%c\n", ch - 0x20);

		}
		else{//�A���t�@�x�b�g�ȊO�̓G���[
			printf("�G���[:�A���t�@�x�b�g����͂��Ă�������\n");
		}
	}
}