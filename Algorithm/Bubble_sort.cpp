#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 5, 8, 3, 1, 0, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int flag = false; // for optimizing code we use this falg
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
