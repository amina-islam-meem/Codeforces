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
        int n,x; cin >> n >> x;
        int arr[n];

        for ( int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        int first = -1 ,last= -1;
        for ( int i = 0 ; i < n ; i++)
        {
            if(arr[i]== 1)
                {
                first = i;
                break;
                }
        }

        for ( int i = n-1 ; i >= 0 ; i--)
        {
            if(arr[i]== 1)
                {
                last = i;
                break;
               }
        }

        int m = (last - first) + 1 ;
        if( m <= x)
            cout << "YES" << endl;
        else
            cout << "NO"  << endl;

    }
    return 0;
}
