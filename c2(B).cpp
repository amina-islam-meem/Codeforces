#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if(N>=3 && N<=49 && N%2!=0)
    {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == N / 2 && j == N / 2) {
                cout << "X";
            } else if (i == j) {

                cout << "\\";
            } else if (i + j == N - 1) {

                cout << "/";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    }

    return 0;
}
