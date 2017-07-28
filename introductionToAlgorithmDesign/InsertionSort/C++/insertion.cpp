#include <iostream>

int main() {
  int n,i,j,k,key;
  std::cin>>n;
  int A[n];
  for ( i = 0; i < n; i++) {
    std::cin>>A[i];
  }
  for ( i = 1; i < n; i++) {
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

