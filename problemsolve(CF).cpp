/*#include<iostream>
using namespace std;
int main()
{
    double X,Y;
    cin>>X>>Y;
    if(X==0&&Y==0){
        cout<<"Origem"<<endl;}
    else if(X==0 && Y!=0){
        cout<<"Eixo Y"<<endl;}
    else if(Y==0 && X!=0){
        cout<<"Eixo X"<<endl;}
    else if(X>0 && Y>0){
        cout<<"Q1"<<endl;}
    else if (X<0 && Y>0){
        cout<<"Q2"<<endl;}
    else if(X<0 &&Y<0)
        cout<<"Q3"<<endl;
        else if(X>0 && Y<0)
        cout<<"Q4"<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    string S;
    cin>>S;
    cout<<"Hello, "<<S<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    if(A>=B)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
       cout<<"No"<<endl;
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int y,m,d;
    y=N/365;
    cout<<y<<" years"<<endl;
    m=(N-(y*365))/30;
    cout<<m<<" months"<<endl;
    d=(N-(y*365))-(m*30);
    cout<<d<<" days"<<endl;

    return 0;
}
