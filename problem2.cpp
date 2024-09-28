#include <iostream>

using namespace std;
int main() {
    int a;
    cin >> a;
    while (a--) {
        int a;
        cin >> a;
        while (a > 0) {
            cout << a % 10 << ' ';
            a /= 10;
        }
        cout << endl;
    }


}
