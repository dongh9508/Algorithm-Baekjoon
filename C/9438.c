#include <stdio.h>
// Problem Number : 9438
// ���� ������ �Է¹޾� 90~100���� A, 80~89���� B, 70~79���� C, 60~69���� D 
// ������ ������ F�� ����ϴ� ���α׷�
int main() {
	int a;
	scanf("%d", &a);

	if(a>=90)
		printf("A");
	else if(a>=80)
		printf("B");
	else if(a>=70)
		printf("C");
	else if(a>=60)
		printf("D");
	else
		printf("F");
}
