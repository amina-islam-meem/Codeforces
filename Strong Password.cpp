/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        string s;
        cin >> s;
        int flag = 0;
        for(int i = 0 ; i < s.size()-1;i++)
            {
            if(s[i]== s[i+1])
                {
                    if(s[i]=='z')
                        s.insert(i+1, 1, char(s[i] - 1));
                    else
                        s.insert(i+1, 1, char(s[i] + 1));
                    flag = 1;
                     break;
                }

            }

            if(flag == 0)
            {
                if(s.back()== 'a')
                cout<<  s + char(s.back()+1) << endl;
                else
                cout<<  s + char(s.back()-1) << endl;

            }
            else
            cout << s << endl;

    }
    return 0;
}*/


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
        string s;
        cin >> s;
        int flag = 0;
        for(int i = 0 ; i < s.size()-1;i++)
            {
            if(s[i]== s[i+1])
                {
                    if(s[i]=='z')
                        s.insert(i+1, 1, char(s[i] - 1));
                    else
                        s.insert(i+1, 1, char(s[i] + 1));
                    flag = 1;
                     break;
                }

            }

            if(flag == 0)
            {
                if(s.back()== 'a')
                cout<<  s + char(s.back()+1) << endl;
                else
                cout<<  s + char(s.back()-1) << endl;

            }
            else
            cout << s << endl;


    }
    return 0;
}
