#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int min = 0, index = -1;
    for (int i = 0; i < n - 1; i++)
    {
        min = arr[i];
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}