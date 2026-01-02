#include<iostream>
using namespace std;
int main()
{
    long long A,B,C,D,mul,r;
    cin>>A>>B>>C>>D;
    mul=(A%100)*(B%100)*(C%100)*(D%100);
    r=mul%100;
    if(r<10)
    {
        cout<<"0"<<r<<endl;
    }
    else
    {
    cout<<r<<endl;
    }
    return 0;
}
