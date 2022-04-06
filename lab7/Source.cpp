#include "List.h"

int compare1(int a, int b) {
    if (a < b) return -1;
    if (a == b)return 0;
    return 1;
}

int compare2(int a, int b) {
    if (a < b)return 1;
    if (a == b)return 0;
    return -1;
}

int main() {
    List<int> l;
    l.push(1); l.push(2); l.push(3);
    l.print();
    for (int i = 0; i < 10; ++i) {
        l.push(i);
    }
    l.print();
    l.sort(compare1);
    l.sort(compare2);
    return 0;
}