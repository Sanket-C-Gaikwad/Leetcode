#include <iostream>
using namespace std;

// Function to swap two elements &a is referencing the original value of arrays, any change in reference will change the memory location pointed by array
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function to find the pivot position
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choosing the last element as the pivot
    int i = low - 1;  // Index of the smaller element

    for (int j = low; j < high; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;  // Increment the index of the smaller element
            swap(arr[i], arr[j]);  // Swap the current element with the smaller element
        }
    }

    swap(arr[i + 1], arr[high]);  // Place the pivot in the correct position
    return i + 1;  // Return the pivot index
}

// Quicksort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array
        int pi = partition(arr, low, high);

        // Recursively sort the elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // size of one element of the array is 4 byte (32 bit), ie 24/4 = 6 numbers

    cout << "Original array: ";

    // or std::cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
