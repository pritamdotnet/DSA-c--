#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

void bubbleSort(int arr[], int n){  // o(n^2)
  for(int i=0; i<n-i-1; i++) {
    bool isSwap = false;
    for(int j=0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]) {
        swap(arr[j], arr[j+1]);
        isSwap = true;
      }
    }

      if(!isSwap) { // array is already sorted
        return;
      }
  }
}

void printArray(int arr[], int n){
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void selectionSort(int arr[], int n){ // O(n^2)
  for(int i=0; i<n-1; i++){
     int SI = i; // SI = smallestIndex, unsorted part starting 
     for(int j=i+1; j<n; j++){
        if(arr[j] < arr[SI]){
            SI = j;
        }
      }

        swap(arr[i], arr[SI]);
  }
}

void insertionSort(int arr[], int n){
  
  for(int i=1; i<n; i++){
      int curr = arr[i];
      int prev = i-1;

      while (prev >= 0 && arr[prev] > curr)
      {
        arr[prev+1] = arr[prev];
        prev--; 
      }

    arr[prev+1] = curr; // placing the curr ele in its correct position
  }
}


int main(){
  int n = 5;
  int arr[] = {4, 1, 5, 2, 3};

 // bubbleSort(arr, n);
  // selectionSort(arr,n);
  insertionSort(arr, n);
  printArray(arr,n);

  return 0;
}