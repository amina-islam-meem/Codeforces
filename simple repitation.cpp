/*#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long x;cin>>x;
        int k;cin>>k;
        int c = 0;
        for (int i = 1; i <= x; i++)
          {
        if (x % i == 0)
        {
           c++;
        }
         }
         if(k==1 && c==2)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

bool isPrime(ll x)
{
    if (x < 2) return false;
    if (x % 2 == 0) return (x == 2);
    for (long long i = 3; i * i <= x; i += 2)
        {
        if (x % i == 0)
         return false;
       }
    return true;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n,k; cin >> n >> k;
        string s = to_string(n);
        string s1 = "";
        for(int i = 0 ; i < k ; i++)
        {
            s1 += s;
        }

         if(s1.size()>18)
            no
         else
            {
                ll num = stoll(s1);

                if(isPrime(num))
                   yes
                else
                   no
            }
    }
    return 0;
}
