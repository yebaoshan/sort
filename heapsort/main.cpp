#include <iostream>

using std::cout;

void sort(int arr[], int k, int m)
{
    int i = k, j = 2 * k + 1;
    bool finished = false;
    int x = arr[k];
    while ((j <= m) && (!finished)) {
        if ((j < m) && (arr[j] > arr[j+1])) j = j + 1;
        if (x <= arr[j]) {
            finished = true;
        } else {
            arr[i] = arr[j];
            i = j;
            j = 2 * i;
        }
    }

    arr[i] = x;
}

void heap(int arr[], int n)
{
    int m = n / 2;
    int t;
    for (int i = m; i >=0; i--) sort(arr, i, n);
    for (int j = n; j >=1; j--) {
        t = arr[j];
        arr[j] = arr[0];
        arr[0] = t;
        sort(arr, 0, j - 1);
    }
}

int main()
{
    int arr[] = {2, 4, 3, 6, 25, 10};
    int n = sizeof(arr) / sizeof(int);
    heap(arr, n-1);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << '\t';
    }
}
// vim: set ts=4 sw=4 sts=4 et:
