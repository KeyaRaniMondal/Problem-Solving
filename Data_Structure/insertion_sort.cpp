#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i, j, temp;
    for (int i = 1; i < n; ++i)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << "ascending:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    for (int i = 1; i < n; ++i)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << endl
         << "descending:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    insertion_sort(arr, n);
}