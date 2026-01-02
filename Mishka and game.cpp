#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int c1=0;
    int c2=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            c1++;
        else if(a==b)
            continue;
        else
            c2++;
    }
    if(c1>c2)
        cout<<"Mishka"<<endl;
    else if(c1==c2)
        cout<<"Friendship is magic!^^"<<endl;
    else
        cout<<"Chris"<<endl;
    return 0;
}
