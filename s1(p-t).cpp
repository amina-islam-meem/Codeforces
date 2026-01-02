/*#include<iostream>
using namespace std;
int main()
{
   double A,B,C;
   cin>>A>>B>>C;
   if(A<=B && A<=C && B<=C)
   {
       cout<<A<<B<<C<<endl;
   }
   else if(B<=A && B<=C && A<=C)
   {
       cout<<B<<A<<C<<endl;
   }
  else if(C<=A && C<=B && B<=A)
   {
       cout<<C<<A<<B<<endl;
   }
   return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int s, m, l;
    if (A <= B && A <= C) {
        s = A;
        if (B <= C) {
            m = B;
            l = C;
        } else {
            m = C;
            l = B;
        }
    } else if (B <= A && B <= C) {
        s = B;
        if (A <= C) {
            m = A;
            l = C;
        } else {
            m = C;
            l = A;
        }
    } else {
        s = C;
        if (A <= B) {
            m = A;
            l = B;
        } else {
            m = B;
            l = A;
        }
    }

    cout << s << endl << m << endl << l << endl;

    cout << endl;

    cout << A << endl << B << endl << C << endl;

    return 0;
}

