#include <iostream>

using std::cout;

void sort(int arr[], int s, int t, int&i)
{
    int x = arr[s];
    while (s < t) {
        while ((s < t) && (x <= arr[t])) t--;
        arr[s] = arr[t];
        while ((s < t) && (x >= arr[s])) s++;
        arr[t] = arr[s];
    }

    arr[s] = x;
    i = s;
}

void qksort(int arr[], int s, int t)
{
    if (s < t) {
        int i;
        sort(arr, s, t, i);
        qksort(arr, s, i-1);
        qksort(arr, i+1, t);
    }
}

int main()
{
    int arr[] = {1, 2, 4, 3, 34, 20};
    int n = sizeof(arr) / sizeof(int);
    qksort(arr, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << '\t';
    }
}
// vim: set ts=4 sw=4 sts=4 et:
