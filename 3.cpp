#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;cin>>N;
    int count=0;
    while(N--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a==1&&b==1&&c==0)||(a==0 && b==1 && c==1)||(a==1 && b==0 && c==1)||(a==1 && b==1 && c==1))
            count++;
  }
  cout<<count;
  return 0;
}

