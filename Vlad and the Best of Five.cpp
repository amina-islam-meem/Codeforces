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
        int countA = 0;
        int countB = 0;
        for(int i = 0; i<5 ; i++)
        {
            if(s[i]=='A')
                countA++;
            else
                countB++;
        }
        if(countA>countB)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;

    }
    return 0;
}
