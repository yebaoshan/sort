#include <iostream>

using std::cout;

void sort(int arr[], int n)
{
    int x, y;
    for (int i = 0; i < n - 1; i++) {
        x = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[x] > arr[j])
                x = j;
        }

        if (x != i) {
            y = arr[i];
            arr[i] = arr[x];
            arr[x] = y;
        }
    }
}

int main()
{
    int arr[] = {2, 3, 8, 5, 15, 9};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\t';
    }
}
// vim: set ts=4 sw=4 sts=4 et:
