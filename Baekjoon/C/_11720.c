#include<stdio.h>
// Problem Number : 11720
// N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷�.
int main() {
	int n, sum=0;
	scanf("%d", &n);
	char s[100];
	
	scanf("%s", &s);

	for(int i=0; i<n; i++){
		sum += s[i] - 48;
	}
	
	printf("%d", sum);
}


