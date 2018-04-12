#include <iostream>

using std::cout;

void sort(int arr[], int n)
{
    int x, i, j;
    for (i = 0; i < n; i++) {
        x = arr[i];
        for (j = i; j > 0; j--) {
            if (x < arr[j - 1]) {
               arr[j] = arr[j - 1];
            } else {
               break;
            }
        }

        arr[j] = x;
    }
}

int main()
{
    int arr[] = {1, 3, 5, 2, 56, 23};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\t';
    }
}

// vim: set ts=4 sw=4 sts=4 et:
