#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        int arr[n];
        int count = 0 ,maxcount = 0;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        for( int i = 0 ; i < n ; i++)
        {
            if(arr[i]==0)
            {

                count++;
                maxcount = max(count , maxcount);
            }
            else
                count = 0;
        }

        cout << maxcount << endl;
    }
    return 0;
}
