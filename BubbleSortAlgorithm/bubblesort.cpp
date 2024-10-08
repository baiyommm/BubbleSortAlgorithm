#include "bubblesort.h"
#include <iostream>

using namespace std;

namespace Sort {
    // Function to perform bubble sort
    void bubbleSort(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            // size - 1 because last element is already found
            for (int j = 0; j < size - i - 1; j++) {
                // Swap function (when the current element is greater than the next element)
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    // Function to print the array
    void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
