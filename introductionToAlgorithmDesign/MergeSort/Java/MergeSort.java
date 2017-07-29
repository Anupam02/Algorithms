class MergeS {
    void Merge(int A[], int p, int q, int r) {
	int n1 = q-p+1;
	int n2 = r-q;

	int[] L = new int[n1+1];
	int[] R = new int[n2+1];

	for(int i = 0; i < n1; i++) {
	    L[i] = A[p+i];
	}
	L[n1] = 999999;
	for(int i = 0; i < n1; i++) {
	    System.out.print(L[i]+" ");
	}
	System.out.println();

	for(int i = 0; i < n2; i++) {
	    R[i] = A[q+1+i];
	}
	R[n2] = 999999;
	for(int i = 0; i < n2; i++) {
	    System.out.print(R[i]+" ");
	}
	System.out.println();

	int i ,j,k;
	i = j = 0; k = p;
	while ( k <= r) {
	    if ( L[i] < R[j]) {
		A[k] = L[i];
		i++;
	    } else {
		A[k] = R[j];
		j++;
	    }
	    k++;
	}
    }

}

public class MergeSort {
    public static void main(String[] argv) {
	MergeS m = new MergeS();
	int [] A = { 1 ,5 ,3,2};
	m.Merge(A,0,1,3);
	for(int i = 0; i < 4; i++) {
	    System.out.print(A[i]+" ");
	}
	System.out.println();
    }
}
