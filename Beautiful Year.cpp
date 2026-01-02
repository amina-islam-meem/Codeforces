#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;cin>>N;
    while(true)
    {
        N++;
        int a = N/1000;
        int b = N/100%10;
        int c = N/10%10;
        int d = N%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
          cout<<N;
           break;
        }
    }
    return 0;
}
