// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int search (int arr[], int target, int n) {

        int low = 0;

        int high = n - 1;


        while (low <= high) {
            
            int mid = low + (high - low) / 2;
            
            if (target == arr[mid]) { return mid; }

            if (target < arr[mid]) { high = mid - 1; }

            else { low = mid + 1; }
        }

        cout << "target not found" << endl;

        return -1;

}






void printArray(int arr[], int n) {

        for (int i = 0; i < n; i++) {

                cout << arr[i] << " ";

        }
        cout << endl;

}

int main() {

        int n = 100;

        int arr[n];
        

        for (int i = 0; i < n; i++) {

                arr[i] = i + 1;
        }

        printArray(arr, n);

        int target = search(arr, 70, n);
        
        cout << target << endl;
        
        return 0;

}
