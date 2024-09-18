#include <iostream>
using namespace std;
int n;

int partition(int arr[], int l, int h) {
 
    int pivot = arr[h];

    int i = l - 1;

    for (int j = l; j <= h - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);  
    return i + 1;
}

void QuickSort(int arr[], int l, int h) {
  
    if (l<h) {
   
        int pivotindex = partition(arr, l, h);
        QuickSort(arr, l, pivotindex - 1);
        QuickSort(arr, pivotindex + 1, h);
    }
}
int main(){
	

	cout<<"Enter the value of n:";
	cin>>n;
	int arr[n-1];
	
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	QuickSort(arr, 0, n - 1);
    cout << "Sorted Array\n";
    cout<<"[";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " , ";
    }
    cout<<"]";
	
	return 0;
}
