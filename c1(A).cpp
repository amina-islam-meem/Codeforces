#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x,p;
    double m;
    cin>>x>>p;
    m=p/(1-x/100.0);
   cout << fixed << setprecision(2) << m << endl;

    return 0;

}
