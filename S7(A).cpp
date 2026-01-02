#include<bits/stdc++.h>
using namespace std;

void print(int N,int m)
{
    if(m==N)
    {
        return;
    }
  cout<<"I love Recursion"<<endl;
  print(N,m+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;cin>>N;
    int m=0;
    print(N,m);
    return 0;
}
