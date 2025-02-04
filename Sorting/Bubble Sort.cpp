#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

//function to print array
void printArray(int arr[], int n){
    
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {4, 10, 12, 6, 8, 14, 20, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Unsorted Array: ";
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    cout << "Sorted Array: ";
    printArray(arr, n);
    
    return 0;
}
