#include <stdio.h>
// Problem Number : 2441
// ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ���α׷� 
int main() {
	int n,i,j;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
     for(j=1; j<i; j++)
        printf(" ");
     for(j=n; j>=i; j--)
        printf("*");
     printf("\n");
 	}
}
