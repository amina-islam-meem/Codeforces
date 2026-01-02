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
        int n,x; cin >> n >> x;
        if( n <= 2)
            cout << 1 << endl;



    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n ; cin >> n;
    vector<int>a(n);
    int target ; cin >> target;
    bool check = false;
    for(int i = 0 ;i < n ; i++)
    {
        if(a[i]== target)
        {
            cout<< i << endl;
            check = true;
        }

    }
    if(check == false)
    cout << -1 << endl;
    return 0;
}

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
        int N; cin >> N;
        if(N < 3)
        cout <<"None" <<endl;
        else
        {
        if(N % 3 && N %4 && N%5)
        cout <<"Both" << endl;
        else
        {
            if(N%3 && N%4)
            cout << "Leapy" << endl;
            else
            cout << "Jumpster" <<endl;
        }
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;cin >> q;
    vector<int> a;

    while (q--)
     {
        int type;
        cin >> type;

        if (type == 1)
         {
            int x;
            cin >> x;
            a.push_back(x);
        }
         else
          {
            if (a.empty())
            {
                cout << "empty\n";
            }
            else
             {
                sort(a.begin(),a.end());
                int mn = a[0];
                cout << mn << "\n";
                a.erase(remove(a.begin(), a.end(), mn), a.end());

            }
        }
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
        int n,x; cin >> n >> x;
        if(n < 3)
            cout << 1 << nl;
        else
        {
            int m =ceil(double(n-2)/x);
             cout << 1 + m << nl;
        }

    }
    return 0;
}






