#include <iostream>

using namespace std;
int main() {
    int f;
    cin >> f;
    for( int a = 1; a <= f; a++ ) {
        cout << a << "";
    }
    for ( int a = f; a >= 1; a-- ) {
        cout << a << "";
    }
    cout << endl;
    for ( int a = 1; a <= f - 1; a++ ) {
        cout << a << "";
    } cout << "  ";
    for ( int a = f - 1 ; a >= 1; a-- ) {
        cout  << a << "";
    } cout << endl;
    for ( int a = 1; a <= f-2 ; a++ ) {
        cout << a << "";
    } cout << "    ";
    for ( int a = f-2 ; a >= 1; a-- ) {
        cout << a << "";
    } cout << endl;
    for ( int a = 1; a <= f-3; a++ ) {
        cout << a << "";
    } cout << "      ";
    for ( int a = f-3; a >= 1; a-- ) {
        cout << a << "";
    } cout << endl;
    for ( int a =1; a <= f-4; a++ ) {
        cout << a << "";
    } cout << "        ";
    for ( int a = f-4; a >= 1; a-- ) {
        cout << a << "";
    } cout << endl;
}

