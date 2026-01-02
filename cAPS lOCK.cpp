#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;cin>>s;
    int count = 0;
    int count1 = 0;
    for(int i = 0; i<s.length();i++)
    {
    if(s[i]>='A' && s[i]<='Z')
        count++;
        else
            count1++;
    }

    if((s[0]>='a' && s[0]<='z')&&count1==1)
    {
        s[0]=toupper(s[0]);

    for(int i = 1; i<s.length() ; i++)
    {
        s[i] = tolower(s[i]);
    }
            cout<<s<<endl;
            return 0;
    }
    if(count == s.length())
    {
        for(int i = 0 ; i< s.length(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    else
        cout<<s<<endl;

    return 0;
}
