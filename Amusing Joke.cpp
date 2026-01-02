#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string S = s1+s2;
     sort(S.begin(),S.end());
    sort(s3.begin(),s3.end());
    if(S==s3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
