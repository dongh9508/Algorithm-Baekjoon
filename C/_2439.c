#include <stdio.h>
// Problem Number : 2439
// ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ���α׷�. 
int main() {
    int n,i,j;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
       for(j=n-i; j>0; j--)
           printf(" ");
    	for(j=0; j<i; j++)
             printf("*");
        printf("\n");
    } 
}
