#include<stdio.h>
#include<string.h>
// Problem Number : 11721
// ���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ���̰� N�� �ܾ �־�����.
// �� �ٿ� 10���ھ� ��� ����ϴ� ���α׷�.
int main() {
	char s[101];
	int i,j;
	
	scanf("%s", s);
	j = strlen(s);

	for(i=0; i<j; i++) {
		printf("%c", s[i]);
		if((i+1)%10 == 0)
			printf("\n");
	}
}
