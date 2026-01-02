/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        float c,d;
        cin>>a>>b;
        c=a%2;
        d=b%2;
        if(c==0 && a/2!=b)
        {
            cout<<"Yes"<<endl;
        }
        else if(d==0 && b/2!=a)
        {
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    long long a,b;
    cin>>a>>b;
    if(((a%2)==0 && (a/2)!=b)||((b%2)==0 && (b/2)!=a))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
  }
  return 0;
}
