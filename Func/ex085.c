#include <stdio.h>
void Str_Cat(char* s1, char* s2); /* �v���g�^�C�v�錾 */
main()
{
	char a[256], b[256];
	printf("�z��a:");
	gets(a);
	printf("�z��b:");
	gets(b);
	Str_Cat(a, b);
	printf("�z��a:%s\n", a);
}
// ������1�ɕ�����2��A������
// �߂�l : �Ȃ�
// �� �� : char *s1 �E������1
// char *s2 �E������2
void Str_Cat(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
}