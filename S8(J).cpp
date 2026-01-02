/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag = true;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n/= 10;
    }
    for (int i = 1; i <= n; i++) {
        if (flag=true && n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag = true;
    int N = n;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            flag = false;
            break;
        }
        n /= 10;
    }

    if (flag) {
        for (int i = 1; i <=N; i++) {
            if (N % i == 0) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}*/
#include <iostream>
using namespace std;
bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}



