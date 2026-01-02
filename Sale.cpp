#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n , m;
    cin >> n >> m;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());
    int earn = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] < 0)
            earn += -arr[i];
        else
            break;
    }

    cout << earn << endl;


    return 0;
}
