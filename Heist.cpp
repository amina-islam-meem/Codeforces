#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n ; cin >> n;
    int arr[n];

    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int result = (arr[n-1]-arr[0])+1;
    cout << result - n << endl;
    return 0;
}
