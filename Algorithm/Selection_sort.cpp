#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 5, 8, 3, 1, 0, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
                }
        swap(arr[i], arr[min_index]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
