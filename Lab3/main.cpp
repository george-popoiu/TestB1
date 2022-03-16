#include "Math.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    Math::Add(10, 20);
    Math m;
    m.Add(39, 40); // => Math::Add(39, 40);

    Math::Add(1, 2, 3);

    Math::Add(1.0, 2.0, 3.4);

    cout << Math::Add(6, 1, 2, 3, 4, 5, 6) << endl;
    cout << Math::Add(7, 1, 2, 3, 4, 5, 6, 7) << endl;

    printf("Hello\n");
    printf("Number: %d\n", 10);
    printf("Number: %d. String: %s", 10, "Test");

    return 0;
}