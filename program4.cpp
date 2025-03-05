#include <iostream>
#include <string>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

template <class T>
T add(T a, T b, T c) {
    return a + b + c;
}

template <class T>
T concatenate(T a, T b) {
    return a + b;
}

template <class T>
T concatenate(T a, T b, T c) {
    return a + b + c;
}

int main() {
    cout << "Adding two integers: " << add(5, 10) << endl;
    cout << "Adding three integers: " << add(5, 10, 15) << endl;

    string str1 = "Hello";
    string str2 = " ";
    string str3 = "World";
    cout << "Concatenating two strings: " << concatenate(str1, str3) << endl;
    cout << "Concatenating three strings: " << concatenate(str1, str2, str3) << endl;

    return 0;
}