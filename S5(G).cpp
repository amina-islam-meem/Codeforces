#include<bits/stdc++.h>
using namespace std;

void min_max(int arr[],int n)
{
    int mini = arr[0];
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
        {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
        }
    cout << mini << " " <<maxi;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int arr[n];
    for( int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    min_max(arr,n);
    return 0;
}
