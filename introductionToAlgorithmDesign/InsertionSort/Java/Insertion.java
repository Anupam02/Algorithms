//Java program for implementation of Insertion Sort
class Insertion {
    /* Function to sort Aay using insertion sort */
    void insertionSort(int A[]) {

	for ( int i = 1; i < A.length; i++ ) {
	    int key = A[i];
	    int j = i-1;
	    // System.out.println(A[j]);
	    while ( j >= 0 && A[j] > key ) { /* Thu Jul 27 18:56:26 IST 2017  Just try to reverse the order to A[j] > key && j >= 0 and you will know - it throws a outof bound error because it tries to access A[-1] before it checks for j >= 0 */
		A[j+1]  = A[j];
		j--;
	    }
	    A[j+1] = key;
	    for ( int k = 0; k <= i; k++) {
		System.out.print(A[k] + " ");
	    }
	    System.out.println();
	}
    }

    public static void main(String[] argv) {
	int A[]  = { 4, 1, 5, 3, 2 };
	// System.out.println(A.length);
	// System.out.println(A[0]);
	Insertion ob  = new Insertion();
	ob.insertionSort(A);
    }
}
