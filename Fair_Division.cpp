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
        vector<int>v(n);
        int sum = 0,c=0;
        for(int i = 0 ; i < n ; i++)
        {cin >> v[i];
            sum+=v[i];
           if(v[i]== 1) c++;
        }

        if(sum %2 != 0)
          no
        else if((n-c) %2 == 0 || c >1)
        yes
        else
        no
        

        
    }
    return 0;
}


