#include<stdio.h>
// Problem Number : 1546
// �����̴� �⸻��縦 ���ƴ�.  �����̴� ������ �����ؼ� ���� ��������� �ߴ�.
// �����̴� �ڱ� ���� �߿� �ִ밪�� �����. �� ���� M�̶�� �Ѵ�.
// ��� ������ ����/M*100�� �Ǿ� 71.43���� �ȴ�.
// �������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷�.
int main() {
	int n;
	scanf("%d", &n);

	int max = 0;
	float sum = 0.0;
	int score[1000] = {0, };
	
	for(int i=0; i<n; i++) {
		scanf("%d", &score[i]);
		if(max<score[i])
			max=score[i];
	}
	
	for(int i=0; i<n;  i++)
		sum += ((float)score[i]/(float)max)*100;
		
	printf("%.2lf", sum/(float)n);'
}


