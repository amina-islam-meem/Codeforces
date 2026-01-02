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
        int k, n , m; cin >> k >> n >> m;
        vector<int>a(n);
        vector<int>b(m);

        for(int i = 0 ; i < n ; i++)cin >> a[i];
        for(int i = 0 ; i < m ; i++)cin >> b[i];

        vector<int>an;

        int p = 0;
        int q = 0;
        int r = k;
        bool check = false;
        while(p<n || q <m)
        {
            int flag = 0;

        if (p < n && a[p] == 0)
            {
            an.push_back(0);
            k++;
            p++;
            flag = 1;
            }

        else if (p < n && a[p] <= k)
            {
            an.push_back(a[p]);
            p++;
            flag = 1;
           }

       else if (q < m && b[q] == 0)
            {
            an.push_back(0);
            k++;
            q++;
            flag = 1;
            }

        else if (q < m && b[q] <= k)
            {
            an.push_back(b[q]);
            q++;
            flag = 1;
           }


        if (flag == 0)
        {
            check = true;
            break;
        }


        }

        if(check == true)cout << -1 ;
        else{
     for(int val : an)
        cout << val << " ";
        }

     cout << nl;


    }
    return 0;
}
