#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n ; cin >> n;
    string arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    string maxA = *max_element(arr, arr + n);
    cout << maxA << endl;
    return 0;
}
