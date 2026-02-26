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

      int n; cin >> n;

      if(n <= 2)
        {
          cout << 1 << nl;
          for(int i = 0; i < n; i++)
               cout << 1 << " ";

                 cout << nl;

                 return 0;
         }

      else
        {

       cout << 2 << endl;

       int m = n+1;

       vector<bool>prime(m+1,true);

        prime[0] = prime[1] = false;
        for(int i = 2;i*i <= m; i++)
        {
            if(prime[i])
            {
                for(int j= i*i; j <= m; j+=i)
                    prime[j]= false;
            }
        }

        for(int i =2; i <= m; i++)
        {
            if(prime[i])
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }


        }
    return 0;
}



