#include<iostream>
using namespace std;
int main()
{
    char C;
    cin>>C;
    if(C>='a' && C<'z')
    {
        C++;
        cout<<C<<endl;
    }
    else if(C=='z')
    {
        cout<<"a"<<endl;
    }
    return 0;
}
