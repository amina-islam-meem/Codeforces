#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;cin>>N;
    int count=0;
    while(N--)
    {
        string s;cin>>s;
        if(s=="++X"||s=="X++")
            count++;
        else
            count--;

    }
    cout<<count;
    return 0;
}
