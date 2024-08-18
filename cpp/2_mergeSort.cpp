#include <iostream>
using namespace std;

// Time complexity in all cases: Big O(nlong(n))
// Space complexuty of O(n)


void merge(int arr[], int left, int mid, int right) {

        int n1 = mid - left + 1;

        int n2 = right - mid;

        int leftArray[n1], rightArray[n2];

        // Copying the main array into temp left and right array
        for (int i = 0; i < n1; i++) {

                leftArray[i] = arr[left + i];
        }

        for (int j = 0; j < n2; j++) {

                rightArray[j] = arr[mid + j + 1];
        }


        int i = 0;
        int j = 0;
        int k = left;

        // Comparing the smallest value from left and right array and copyig into the main array
        while (i < n1 && j < n2) {

                if (leftArray[i] < rightArray[j]) {
                        arr[k] = leftArray[i];
                        i++;
                        k++;
                } else {

                        arr[k] = rightArray[j];
                        j++;
                        k++;
                }
        }

        // Copying the leftover element from left array to main array
        while (i < n1) {

                arr[k] = leftArray[i];

                k++;
                i++;
        }
  
        while (j < n2) {

                arr[k] = rightArray[j];

                k++;
                j++;
        }

}

void mergesort(int arr[], int left, int right) {
//subdividing the array into smaller arrays recurrceviely
        if (left < right) {

                int mid = left + (right - left) / 2;

                mergesort(arr, left, mid);

                mergesort(arr, mid + 1, right);

                merge(arr, left, mid, right);

        }

}

void printArray(int arr[], int size) {

        for (int i = 0; i <= size; i++) {

                cout << arr[i] << " ";
        }
        cout << endl;
}

int main() {

        int arr[]  = {22, 4, 1, 88, 8, 9, 10, 3};

        int size = sizeof(arr) / sizeof(arr[0]);

        printArray(arr, size - 1);

        mergesort(arr, 0, size - 1);

        printArray(arr, size - 1);

}
