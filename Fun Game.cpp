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
        string a,b;
        cin >> a >> b;

        if(a==b)
            yes
        else
        {
            int an = -1;
            bool check = false;
            for(int i = 0 ; i < n ; i++)
            {
                if(a[i]== '1')
                {
                    an = i;
                    check = true;
                    break;
                }
            }

            if(check)
            {
                int flag = 1;
                for(int i = 0;i < n ; i++)
                {
                    if(a[i] != b[i])
                    {
                        if(i < an)
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                if(flag == 1)
                    yes
                else
                   no
            }
            else
                no
        }



    }
    return 0;
}
