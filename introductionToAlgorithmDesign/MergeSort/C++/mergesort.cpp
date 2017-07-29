#include <iostream>
#define INF 9999999
void merge(int A[], int p, int q, int r) {
  int n1 = q-p+1;
  int n2 = r-q;

  int L[n1+1];
  int R[n2+1];
  int i,j,k;

  for( i = 0; i < n1; i++)
    L[i] = A[p+i];

  L[n1] = INF;

  for( i = 0; i < n2; i++)
    R[i] = A[q+i+1];

  R[n2] = INF;

  i = j = 0; k = p;
  while ( k <= r) {
    if ( L[i] < R[j] ) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
    k++;
  }
}

void mergeSort(int A[], int p, int r) {
  if ( p < r ) {
    int q = (p+r)/2;
    mergeSort(A, p, q);
    mergeSort(A, q+1, r);
    merge(A,p,q,r);
  }
}

int main() {
  int n;
  std::cin>>n;
  int A[n];
  for ( int i = 0; i < n; i++)
    std::cin>>A[i];
  mergeSort(A,0,n-1);
  for (int i = 0; i < n; i++)
    std::cout<<A[i]<<" ";
  std::cout<<std::endl;
  return 0;
}
