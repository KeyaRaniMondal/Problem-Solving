// Need to find element that has only one occurance in a array.
// example:  4  3  2  1  1  2  4
//         output:  3

// 1.  Naive approach of having time complexity of O(n * n)  and space complexity of O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int flag = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j && arr[i] == arr[j])
                flag = 1;
        }
        if (flag == 0)
        {
            cout << arr[i];
            break;
        }
        flag = 0;
    }
    return 0;
}

// 2. Sorting the array having time complexity of O(n * logn)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i += 2)
    {
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i];
            break;
        }
    }
    return 0;
}

// 3. Using (Hashmap) Unorderd Map having time complexity of O(n) and space complexity of O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> umap;
    for (int i = 0; i < n; ++i)
    {
        if (umap.find(arr[i] != umap.end()))
        {

        }
    }
    return 0;
}