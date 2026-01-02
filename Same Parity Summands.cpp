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
        int N,k; cin >> N>>k;
        int p=k;
        int q=2*k;
        if(N>=p && (N-p)%2==0)
        {
            cout<<"YES"<<endl;
            for (int i = 0; i < k - 1; i++)
                cout << "1 ";
            cout << N - (k - 1) << endl;
            continue;
        }
      if(N>=q && (N-q)%2==0)
        {
            cout<<"YES"<<endl;
            for (int i = 0; i < k - 1; i++)
                cout << "2 ";
            cout << N - 2*(k - 1) << endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}

