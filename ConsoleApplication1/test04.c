#include <stdio.h>
#include <string.h>
int main()
{
	//�|�C���^�{����
	//'7' �� ASCII �R�[�h��������
	//�������� '0' �� ASCII �R�[�h������
	//���ʂƂ��� 7 �Ƃ����l��������
	printf("%d\n", *("9876" + 2) - '0');
	static const char s[] = "TEST";
	printf("%d\n", (int)(strchr(s, 'S') - s));
	// s    -  s    �� 0 �ł���
	//&s[0] - &s[0] �� 0 �ł���
	//&s[2] - &s[0] �� 2 �ł���
}
