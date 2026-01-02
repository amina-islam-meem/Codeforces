#include<bits/stdc++.h>
using namespace std;

void fun(int N,char ch)
{
    for(int i = 0 ; i< N ; i++)
    {
        cout<<ch<<" ";
    }
    cout<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int N; cin >> N;
        char c; cin>>c;
        fun(N,c);

    }
    return 0;
}
