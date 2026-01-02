/*#include<iostream>
using namespace std;
int main()
{
    int A,B,number;
    cin>>A>>B;
    for(int i=A;i<=B;i++)
    {
        int number = i;
    while (number > 0) {
        int digit = B % 10;
        if(digit!=4 || digit!=7)
        {
            cout<<"-1";
            break;
        }
    }
    B /= 10;

    }
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    bool found = false;

    for (int i = A; i <= B; i++) {
        int num = i;
        bool isLucky = true;

        while (num > 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            num /= 10;
        }

        if (isLucky) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "-1";
    }

    return 0;
}

