//Program for Shell Sort in C++
#include <iostream> 
using namespace std; 


int shellSort(int arr[], int n) 
{ 
	for (int gap = n/2; gap > 0; gap /= 2) 
	{ 
	
		for (int i = gap; i < n; i += 1) 
		{ 
		 
			int temp = arr[i]; 

	 
			int j;			 
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
				arr[j] = arr[j - gap]; 
			
			// put temp (the original a[i]) in its correct location 
			arr[j] = temp; 
		} 
	} 
	return 0; 
} 

void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; i++) 
		cout << arr[i] << " "; 
} 

int main() 
{ 
	int arr[] = {102, 4, 5, 10, 123,21}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	cout << "Array before sorting: \n"; 
	printArray(arr, n); 

	shellSort(arr, n); 

	cout << "\nArray after sorting: \n"; 
	printArray(arr, n); 

	return 0; 
} 
