/*#include<bits/stdc++.h>
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
        string s; cin >> s;

        vector<vector<bool>> dp(n, vector<bool>(n, false));


        if(n == 1 || n%2 != 0)
            {
              no
            continue;
           }

      for(int i = 0; i + 1 < n; i++)
        {
            if(s[i] == s[i+1])
              dp[i][i+1] = true;
        }

        for(int i = 4; i<= n; i+= 2)
        {
            for(int j = 0; j + i-1 < n; j++)
            {
                int m = j+i- 1;

                if(s[j] == s[m] && dp[j+1][m-1])
                    dp[j][m] = true;


               if(!dp[j][m])
               {
                    for(int k = j+1; k < m; k+=2)
                        {
                    if(dp[j][k] && dp[k+1][m])
                         {
                        dp[j][m] = true;
                        break;
                        }
                      }
               }

            }
        }


   if(dp[0][n-1])
    yes
    else
    no

    }
    return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'



      const int N = 5003;

          string s;
         int n;
         int dp[N][N];

     int f(int l, int r)
          {
               if(l >= r)
                 return 0;

                if(dp[l][r] != -1)
                   return dp[l][r];


              if(s[l] == s[r])
                 {
                    if(r == l + 1 || f(l + 1, r - 1))
                         return dp[l][r] = 1;
                  }


            for(int i = l; i < r; i++)
                {
                    if(f(l, i))
                    {
                        if(f(i + 1, r))
                            return dp[l][r] = 1;
                    }
                }


    return dp[l][r] = 0;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        cin >> n >> s;

        memset(dp, -1, sizeof(dp));

        if(n == 1)
            {
              no
            continue;
           }

      if(f(0, n - 1))
        yes
       else
       no

    }
    return 0;
}*/



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
        string s; cin >> s;

        stack<char>stk;

        for(char ch : s)
            {
            if(!stk.empty() && stk.top() == ch)
                stk.pop();
            else
                stk.push(ch);
             }

        if(stk.empty())
            yes
        else
           no
    }

    return 0;
}
