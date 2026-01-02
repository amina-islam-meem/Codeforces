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
        vector<int>v(N);
        for(int i = 0 ; i < N ; i++)
        {
            cin>>v[i];
        }

        int flag = 0;
        int even = 0;
        int odd = 0;
         for(int i = 0 ; i < N ; i++)
        {
            if(i%2==0)
            {
                if(v[i]%2 == 0)
                {
                   flag = 1;
                }
                else
                even++;
                
            }
            else
            {
                if(v[i]%2 != 0)
                {
                    flag = 1;
                }
                else 
                odd++;
            }
        }
        
      if(even == odd)
      cout << even << endl;
      else
      cout << -1 << endl;
        
    }
    return 0;
}