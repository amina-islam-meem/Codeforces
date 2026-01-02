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
        string s; cin >> s;
        int m = s.size();
        if(m%2==0)
        {
           string first = s.substr(0,m/2);
           string last = s.substr(m/2,m/2);
           if(first == last)
            cout<<"YES"<< endl;
            else
            cout<<"NO"<<endl;

        }
        else
            cout<<"NO"<<endl;


    }
    return 0;
}
