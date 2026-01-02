#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,q; cin >> n >> q;
    string s; cin >> s;
    cin.ignore();
    while(q--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string p;
        ss >> p;


        if (p == "pop_back")
            s.pop_back();
        else if(p == "front")
           cout << s.front() <<endl;
        else if ( p == "back")
            cout<< s.back() << endl;
        else if (p == "sort")
        {
            int l,r; ss >> l >> r;
             sort(s.begin()+(l-1),s.end()+r);
        }
        else if(p == "reverse")
        {
            int l,r; ss >> l >> r;
            reverse(s.begin()+(l-1), s.end()+r);

        }
        else if (p == "print")
        {
            int  pos ; cin>> pos;
            cout << s[pos-1] << endl;

        }
        else if ( p == "substr")
        {
            int l,r ; ss >> l >> r ;
            cout << s.substr(l - 1, r - l + 1) << endl;

        }
        else if ( p == "push_back")
        {
            char m; ss >> m;
            s.push_back(m);
        }

    }
    return 0;
}

