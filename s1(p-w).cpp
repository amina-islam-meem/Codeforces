#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    char S,Q;
    cin>>A>>S>>B>>Q>>C;
    if((S=='+'&&C==(A+B)&&Q=='=')||(S=='-'&&C==(A-B)&&Q=='=')||(S=='*'&&C==(A*B)&&Q=='=')){
        cout<<"Yes"<<endl;}
        else
        {
            int result;
            if(S=='+')
                result=A+B;
            else if(S=='-')
                result=A-B;
            else
                result=A*B;
        cout<<result<<endl;}
    return 0;
}
