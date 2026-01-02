#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;cin>>s;
    int count = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
            count++;
    }
    if(count>=1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
