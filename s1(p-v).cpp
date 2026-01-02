#include<iostream>
using namespace std;
int main()
{
    int A,B;
    char S;
    cin>>A>>S>>B;
    if((S=='>'&&A>B)||(S=='<'&&B>A)||(S=='='&&A==B))
        cout<<"Right"<<endl;
    else
        cout<<"Wrong"<<endl;
    return 0;
}
