#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;

        vector<int>v(n);

        for(int i = 0 ; i < n; i++) cin >> v[i];

        map<int,vector<int>>mp;

        for(int i = 0 ; i <n ; i++)
        {
            for(int j = 0 ; j <11 ; j++)
            {
                if(v[i]%primes[j] == 0)
                {
                     mp[primes[j]].push_back(i);
                    break;
                }

            }
        }


        vector<int> an(n);
        int count =1;
       for( auto[x,y] : mp)
       {
           for(auto val : y)
            an[val]= count;


           count++;
       }
        cout << mp.size() << nl;
      for(int i=0; i <n ; i++)
      {
          cout << an[i] << " ";
      }
        cout << nl;
    }
    return 0;
}
