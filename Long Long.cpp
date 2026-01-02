#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        vector<int>a(n);
        int count = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];

        }

        ll sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i]<0)
                sum+= (-a[i]);
            else
                sum+=a[i];
        }

       for (int i = 0; i < n; i++)
            {
                if (a[i] < 0)
                 {
                    count++;
                while (i< n && a[i]<= 0)
                        i++;
                  }
              }

        cout << sum << " " << count << nl;


    }
    return 0;
}
