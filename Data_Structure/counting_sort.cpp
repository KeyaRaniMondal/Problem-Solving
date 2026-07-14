#include<bits/stdc++.h>
using namespace std;

int getMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; ++i) {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int max = getMax(arr, n);
    int count[max + 1];
    int output[n];
    for (int i = 0; i <= max; ++i) {
        count[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        count[arr[i]]++;
    }
    for (int i = 1; i <= max; ++i) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; ++i) {
        arr[i] = output[i];
        cout << arr[i] << " ";
    }
}

