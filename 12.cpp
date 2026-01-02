#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upperCount = 0, lowerCount = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upperCount++;
        } else {
            lowerCount++;
        }
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (upperCount > lowerCount) {

            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - ('a' - 'A');
            }
        } else {

            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + ('a' - 'A');
            }
        }
    }

    cout << s << endl;
    return 0;
}

