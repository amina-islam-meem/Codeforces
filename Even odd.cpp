#include<iostream>
using namespace std;
int main()
{
    long long int n,k,a;cin>>n>>k;
    if(n%2==0)
        a=n/2;
    else
        a=n/2+1;
        if(k<=a)
            cout<<(k*2)-1<<endl;
        else
            cout<<(k-a)*2<<endl;

    return 0;
}
