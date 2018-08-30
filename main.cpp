#include <iostream>
using namespace std;

int SequentialSearch(int arr[], int n, int size) {
    for (int i = 0; i < size; ++i) {
        if (n == arr[i]) {
            return i;
        }
    }
    return 0;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 7;
    int x = SequentialSearch(arr, n, 10);
    cout << x << endl;
    return 0;
}
