#include<iostream>
using namespace std;
int main()
{
    int a,b;cin>>a>>b;
    int m=0;
    while(a<=b)
    {
     a = a*3;
     b = b*2;
        m++;
    }
    cout<<m<<endl;
    return 0;
}
