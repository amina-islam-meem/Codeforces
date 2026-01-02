#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for (char &ch : a) {
        ch =tolower(ch);
    }
    for (char &ch : b) {
        ch =tolower(ch);
    }
   int comp =a.compare(b);
    if(comp < 0)
        cout<<"-1"<<endl;
    else if(comp>0)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
