#include<stdio.h>
// Problem Number : 4334
// ���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�.
// ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.  
int main() {
  int score[1000];
  double average[1000];
  int n;

  scanf("%d", &n);

  for(int i = 0; i<n; i++) {
      int sum = 0;
      int average1 = 0;
      int sum1 = 0;
      int c;

      scanf("%d", &c);
      for(int j=0; j<c; j++) {
           scanf("%d", &score[j]);
      }
      for(int k=0; k<c; k++) {
          sum += score[k];
      }
      average1 = sum / c;
      for(int m=0; m<c; m++) {
          if(score[m]>average1)
            sum++;
       }
       average[i] = ((double)sum1 / (double)c)*100;
}

	for(int i=0; i<n; i++)
		printf("%.3lf%%\n", average[i]);

}
