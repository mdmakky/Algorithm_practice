#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 5, 9, 12, 14, 16, 21};
    cout << "Enter the element: ";
    int k, low = 0, high = 6;

    cin >> k;
    for (int i = 0; i < sizeof(a) / 4; i++)
    {

        int mid = (low + high) / 2;
        if (a[mid] == k)
        {
            cout << mid << endl;
            break;
        }
        else if (k < a[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << "Not Found!!" << endl;

    return 0;
}
// we can use mid=low+((high-low)/2) instad of using mid= (high+low)/2
//  to avoid errore while the array size is more than 2^21-1
