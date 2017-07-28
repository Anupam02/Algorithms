#include<stdio.h>

int main() {
  int n,i,j,k,key;
  scanf("%d",&n);
  int A[n];
  for ( i = 0; i < n; i++ ) {
    scanf("%d",&A[i]);
  }
  for ( i = 1; i < n; i++ ) {
    key = A[i];
    j = i-1;
    while ( A[j] > key && j >= 0 ) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = key;
    for ( k = 0; k <= i ; k++) {
      printf("%d ",A[k]);
    }
    printf("\n");
    
  }
  return 0;
}
  
  
