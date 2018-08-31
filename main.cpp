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
    int *p;
    int *g;
    int *f;
    int max = size - 1;
    int min = 0;
    g = &max;
    f = &min;
    while (*f <= *g) {
        int pivot = (*g+*f)/2;
        p = &pivot;
        if (n == arr[*p]) {
            return *p;
        }
        else if (arr[*p] < n) {
            *f = *p + 1;
        } else {
            *g = *p - 1;
        }
    }
    return 0;
}

int InterpolationSearch(int arr[], int n, int size) {
    int *p;
    int *g;
    int *f;
    int max = size - 1;
    int min = 0;
    g = &max;
    f = &min;
    while (*f <= *g) {
        int pivot = *f + (((*g-*f)/(arr[*g]-arr[*f]))*(n-arr[*f]));
        p = &pivot;
        if (n == arr[*p]) {
            return *p;
        }
        else if (arr[*p] < n) {
            *f = *p + 1;
        } else {
            *g = *p - 1;
        }
    }
    return 0;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 7;
    int x = InterpolationSearch(arr, n, 10);
    cout << "The number is at index: " << x << endl;
    return 0;
}

