#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s; cin >> s;
    string s1 = "EGYPT";
    while(s.find(s1) != string::npos)
        {
        s.replace( s.find(s1),5," ");
        }
    cout<<s<<endl;
    return 0;
}
