#include<stdio.h>




void merge(int A[], int p, int q, int r) {
  int n1 = q-p+1;
  int n2 = r-q;

  // create arrays L[n1+1],R[n2+1] , one extra space to keep the MAX element
  
  int i,j,k,L[n1+1],R[n2+1];
  for ( i = 0; i < n1; i++)
    L[i] = A[p+i];
  L[i] = 9999999; // or L[n1] = 999999

  printf("first array \n");
  for(i = 0; i<= n1; i++)
    printf("%d ",L[i]);

  printf("\n");
  
  for ( i = 0; i < n2; i++)
    R[i] = A[q+1+i];
  R[i] = 9999999; // or L[n2] = 999999
  
  printf("second array \n");
  for(i = 0; i<= n2; i++)
    printf("%d ",R[i]);

  printf("\n");
 
  i = 0; j = 0; k = 0;
  while ( k <= r-p) {
    if ( L[i] < R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
    k++;
  }
   for ( i = p; i <= r ; i++)
   printf("%d ",A[p+i]);
   printf("\n");
}


 void mergeSort (int A[], int p, int r) {
  if ( p < r ) {
    int q = (p+r)/2;
    printf("value of p = %d, q = %d, r = %d\n",p,q,r);
    mergeSort ( A, p, q);
    printf("value after first merge sort call p = %d, q = %d, r=%d\n",p,q,r);
    mergeSort ( A, q+1, r);
    printf("value after second merge sort call and before merge call p = %d, q = %d, r = %d\n",p,q,r);
    merge (A, p, q, r);
  }
}

int main() {
  int A[] = {4,3,2,1};
  int i;
  //merge(A,0,1,3);
  mergeSort(A,0,3);
  for(i = 0; i<4; i++)
    printf("%d ",A[i]);
  printf("\n");
  return 0;
}
    
  
  
  
    
