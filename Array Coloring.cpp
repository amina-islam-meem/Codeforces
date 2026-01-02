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
        int arr[N];
        int countodd = 0;

        for(int i = 0 ; i < N ; i++)
        {
            cin >> arr[i];
            if(arr[i]%2 != 0)
                countodd++;
        }
        if(countodd %2 == 0)
        cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
