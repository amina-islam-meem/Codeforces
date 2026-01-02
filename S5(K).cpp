#include <bits/stdc++.h>
using namespace std;

void rightShift(int arr[], int n, int x) {
    x %= n;
    int result[n];

    for (int i = 0; i < x; i++)
        {
        result[i] = arr[n - x + i];
       }


    for (int i = x; i < n; i++)
        {
        result[i] = arr[i - x];
       }

    for (int i = 0; i < n; i++)
        {
        cout << result[i] << " ";
       }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x ;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

            cin >> arr[i];
    }
    rightShift(arr,n,x);

    return 0;
}
