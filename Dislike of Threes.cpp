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
        int k; cin >> k;
        int count = 0;
        int N = 1;
        while(true)
        {
            if(N%3!=0 && N%10!=3)
            {
                count++;
                if(count==k)
                    {
                    cout<<N<<endl;
                    break;
                   }
            }
            N++;
        }
    }
    return 0;
}
