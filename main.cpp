#include <iostream>
using namespace std;

int SequentialSearch(int arr[], int n, int size) {
    int *p;
    for (int i = 0; i < size; ++i) {
        p = &arr[i];
        if (n == *p) {
            return i;
        }
    }
    return 0;
}

int BinarySearch(int arr[], int n, int size) {
    int max = size - 1;
    int min = 0;
    while (min <= max) {
        int pivot = (max+min)/2;
        if (n == arr[pivot]) {
            return pivot;
        }
        else if (arr[pivot] < n) {
            min = pivot + 1;
        } else {
            max = pivot - 1;
        }
    }
    return 0;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 7;
    int x = BinarySearch(arr, n, 10);
    cout << "The number is at index: " << x << endl;
    return 0;
}

