#include "Number.h"
#include <iostream>
using namespace std;

int main() {
    Number n1("10", 10);
    Number n2("30", 10);
    if (n1 < n2) {
        cout << "n1 este mai mic" << endl;
    }
    if (n1.operator<(n2)) {
        cout << "n1 este mai mic" << endl;
    }
    Number n3("123456", 10);
    cout << n3[2] << endl;
    cout << n3.operator[](2) << endl;

    Number n4 = n3 + n3;
    n4.Print();
    cout << n4[3] << endl;

    Number n5 = operator+(n3, n3);
    n5.Print();

    return 0;
}