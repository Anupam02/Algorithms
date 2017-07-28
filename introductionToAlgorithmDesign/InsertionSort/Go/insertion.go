package main

import (
	"fmt"
)

func insertionSort (A []int) {
	for i:=1 ; i < len(A) ; i++ {
		var key int = A[i];
		var j int = i-1;
		for ; j >= 0 && A[j] > key ; j-- {
			A[j+1] = A[j];
			
		}
		A[j+1] = key;
		fmt.Println(A);
	}
}

func main() {
	A := []int{3, 1, 5, 2, 4 };
	fmt.Println(A);
	insertionSort(A);
	fmt.Println(A);
}
