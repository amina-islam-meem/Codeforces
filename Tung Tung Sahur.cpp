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
        string p,s;
        cin >> p >> s;
        int i = 0 , j =0;

       bool check = true;

        while(i < p.size() && j < s.size())
        {
            if(p[i]!= s[j])
            {
                check = false;
                break;

            }

                char ch = p[i];
                int c1= 0;
                int c2 = 0;

                while(i < p.size() && p[i] == ch)
                    {
                        c1++;
                        i++;
                    }

           while(j < s.size() && s[j] == ch)
                {
                    c2++;
                    j++;
                }

        if (2*c1<c2 || c2<c1)
        {
            check = false;
            break;
        }


        }
        if(check)
            yes
        else
          no


    }
    return 0;
}

