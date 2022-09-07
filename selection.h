#include "header.h"
#include <vector>

// =================================================================
// Performs the selection sort algorithm on an array.
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// =================================================================
template <class T>
int selectionSort(T *arr, int size) {
	int pos;
	int contador = 0;
	for(int i = size - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(arr[j] > arr[pos]){
				pos = j;
			}
		}

		if (pos != i){
			swap(arr, i, pos);
			contador++;
		}
	}
	return contador;
}

// =================================================================
// Performs the selection sort algorithm on a vector.
//
// @param A, a vector of T elements.
// =================================================================
template <class T>
int selectionSort(std::vector<T> &v) {
	int pos;
	int contador = 0;
	for(int i = v.size() - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(v[j] > v[pos]){
				pos = j;
			}
		}

		if (pos != i){
			swap(v, i, pos);
			contador ++;
		}
	}
	return contador;
}

#endif /* SELECTION_H */
