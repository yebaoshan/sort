#include <iostream>

using std::cout;
void sort(int arr[], int n)
{
    bool complete;
    int t;
    for (int i = 0; i < n; i++) {
        complete = true;
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                t = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = t;
                complete = false;
            }
        }

        if (complete)
            break;
    }
}

int main()
{
    int a[] = {1, 4, 3, 13, 45, 23, 2};
    int n = sizeof(a)/sizeof(int);
    sort(a, n);
    cout << n << '\n';
    for (int i = 0; i < n; i++) {
        cout << a[i] << '\t';
    }
}


// vim: set ts=4 sw=4 sts=4 et:
