#include<stdio.h>
// Probelm Number : 8393
// N�� �־����� ��, 1���� N���� ���� ���ϴ� ���α׷�.
int main() {
	int n, sum=0;
	scanf("%d", &n);
	
 	for(int i=1; i<=n; i++) {
  		sum += i;
	}
	printf("%d", sum);
}
