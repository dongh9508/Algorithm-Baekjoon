#include<stdio.h>
// Probelm Number : 10871
// ���� N���� �̷���� ���� A�� ���� X�� �־�����. 
// �� ��, A���� X���� ���� ���� ��� ����ϴ� ���α׷�.
int main() {
	int n,x,tmp;
	scanf("%d %d", &n, &x);

	for(int i=0; i<n; i++) {
    	scanf("%d", &tmp);
    	if(tmp<x) {
    		printf("%d ", tmp);
    	}
  	}
}
