#include <iostream>

using std::cout;

void merge(int arr[], int s, int m, int t, int narr[])
{
    int i = s, j = m + 1;
    int x = s;
    while (i <= m && j <= t) {
        if (arr[i] < arr[j]) {
            narr[x++] = arr[i++];
        } else {
            narr[x++] = arr[j++];
        }
    }

    while (j <= t) narr[x++] = arr[j++];
    while (i <= m) narr[x++] = arr[i++];
}

void merge0(int arr[], int s, int t, int narr[])
{
    int n = t - s + 1;
    int *tmp = new int[n];
    if (s == t) narr[s] = arr[s];
    else {
        int m = (t + s) / 2;
        merge0(arr, s, m, tmp);
        merge0(arr, m+1, t, tmp);
        merge(tmp, s, m, t, narr);
    }

    delete[]tmp;
}

int main()
{
    int arr[] = {1, 23, 2, 43, 33, 10};
    int n = sizeof(arr) / sizeof(int);
    merge0(arr, 0, n-1, arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\t';
    }
}
// vim: set ts=4 sw=4 sts=4 et:
