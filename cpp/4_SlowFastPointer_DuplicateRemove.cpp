// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {

        for (int i = 0; i < n; i++) {

                cout << arr[i] << " ";

        }
        cout << endl;

}

void removeDuplicate(int arr[], int n) {

    int slow = 0;
    
    for (int fast = 1; fast < n; fast++) {
        
        if (arr[slow] != arr[fast]) {
            slow++;
            arr[slow] = arr[fast];
        }
            
    }
    
    printArray(arr, slow + 1);
    

}



int main() {

        int arr[] = {1,1,1,1,1,3,3,3,4,5,5,8,9};
        
        int n = sizeof(arr) / sizeof(arr[0]);

        printArray(arr, n);

        removeDuplicate(arr, n);
        
        
        return 0;

}
