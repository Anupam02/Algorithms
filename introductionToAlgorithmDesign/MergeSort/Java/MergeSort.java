import java.util.Scanner;

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
	// for(int i = 0; i < n1; i++) {
	//     System.out.print(L[i]+" ");
	// }
	// System.out.println();

	for(int i = 0; i < n2; i++) {
	    R[i] = A[q+1+i];
	}
	R[n2] = 999999;
	// for(int i = 0; i < n2; i++) {
	//     System.out.print(R[i]+" ");
	// }
	// System.out.println();

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

    void MergeSort(int A[],int p ,int r) {
	if ( p < r) {
	int q = (p+r)/2;
	MergeSort(A, p, q);
	MergeSort(A, q+1, r);
	Merge(A,p,q,r);
	}
    }

}

public class MergeSort {
    public static void main(String[] argv) {
	MergeS m = new MergeS();
	// int [] A = { 1 ,5 ,3,2};
	// m.MergeSort(A,0,3);
	Scanner input = new Scanner(System.in);

	int [] B = new int[input.nextInt()];

	for (int i = 0; i < B.length ; i++) {
	    B[i] = input.nextInt();
	}
	m.MergeSort(B,0,B.length-1);
	// for(int i = 0; i < 4; i++) {
	//     System.out.print(A[i]+" ");
	// }
	// System.out.println();
	for(int i = 0; i < B.length; i++) {
	    System.out.print(B[i]+" ");
	}
	
	System.out.println();
    }
}
