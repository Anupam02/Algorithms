function insertionSort(values) {
    var length = values.length;
    for ( var i = 1; i < length; i++ ) {
	var key = values[i];
	var j = i-1;
	while ( j >= 0 && values[j] > key ) {
	    values[j+1] = values[j];
	    j--;
	}
	values[j+1] = key;
    }
    console.log(values);
};
insertionSort([4,1,3,5,2]);
