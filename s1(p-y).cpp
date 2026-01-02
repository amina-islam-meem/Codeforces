#include<iostream>
using namespace std;
int main()
{
    long long A,B,C,D,mul,r;
    cin>>A>>B>>C>>D;
    mul=(A*B*C*D);
    r=mul%100;
    cout<<r<<endl;
    return 0;
}
