#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        string s; cin >> s;
        vll v(n);

        int l = 1;
        int r = n;

        for(int i = n-2; i >=0 ; i--)
        {

                    if(s[i]== '<')
                    {
                        v[i+1]=l;
                        l++;
                    }

                    else
                        {
                            v[i+1] = r;
                            r--;
                        }


        }
        v[0]= l;

       for(auto val : v)
        cout << val << " ";

       cout << nl;

    }
    return 0;
}
