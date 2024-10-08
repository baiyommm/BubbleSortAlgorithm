#include <iostream>
#include "bubblesort.h"

using namespace std;

int main() {
    int arr[] = {997, 584, 396, 145, 220, 486, 798};
    int size = sizeof(arr) / sizeof(arr[0]);   // calculates the size of the array
    
    cout << "Original array: " << endl;
    Sort::printArray(arr, size);  // Print the original array using Sort namespace

    Sort::bubbleSort(arr, size);  // Call the bubble sort function using Sort namespace

    cout << "Sorted array: " << endl;
    Sort::printArray(arr, size);  // Print the sorted array using the Sort namespace

    return 0;
}
