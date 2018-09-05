#include <iostream>
#include <>
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

void Hashing(int data, int arr[]) {
    int pos = data % 5;
    if (arr[pos] == 0) {
        arr[pos] = data;
    } else {
        for (int i = (pos + 1) % 5; i != pos; i = (i + 1) % 5) {
            if (arr[i] == 0) {
                arr[i] = data;
                break;
            }
            if (i == pos) {
                cout << "Out of space\n";
                break;
            }
        }
    }
}

void hashSearch (int data, int arr[]) {
    int pos = data % 5;
    if (arr[pos] == 0) {
        cout << "The element is deleted" << endl;
    }
    else if (arr[pos] == data) {
        cout << "The element is at index " << pos + 1 << endl;
    } else {
        for (int i = (pos + 1) % 5; i != pos; i = (i + 1) % 5) {
            if (arr[i] == data) {
                cout << "The element is at index " << i + 1 << endl;
            }
            else if (arr[i] != data) {
                cout << "Element not found" << endl;
                break;
            }
        }
    }
}

int main() {
    int arr[10] = {101541, 101542, 101543, 101544, 101545, 101546, 101547, 101548, 101549, 101550};
    int size = sizeof(arr)/ sizeof(int);
    return 0;
}

