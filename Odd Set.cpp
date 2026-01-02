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
        int N; cin >> N;
        int m = 2*N;
        int arr[m];
        for(int i = 0 ; i < m ; i++)
        {
            cin>> arr[i];
        }
        int count = 0;
        int count1 = 0;
        for(int i = 0 ; i < m; i++)
        {

            if(arr[i]%2 == 0)
                count++;
            else
                count1++;
        }
       if(count == N)
        cout << "YES" << endl;
       else
        cout << "NO" << endl;

    }
    return 0;
}
