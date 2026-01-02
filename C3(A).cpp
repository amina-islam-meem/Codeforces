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
        int w,h;
        cin >> w >> h;
        if(w==h)
            cout << "Square" << endl;
        else
            cout << "Rectangle" << endl;


    }
    return 0;
}
