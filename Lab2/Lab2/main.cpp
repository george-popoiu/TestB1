#include "NumberList.h"

#include <iostream>
using namespace std;

struct NumberListStruct {
    int count;
    int numbers[10];
};

void Init(NumberListStruct* s) {
    s->count = 0;
}

void Add(NumberListStruct* s, int x) {
    s->numbers[s->count] = x;
    s->count++;
}

void Print(NumberListStruct* s) {
    for (int i = 0; i < s->count; i++) {
        cout << s->numbers[i] << " ";
    }
    cout << endl;
}


int main() {
    NumberList v;
    v.Init();
    v.Add(10); v.Add(20); v.Add(30);
    NumberList w;
    w.Init();
    w.Add(1); w.Add(2); w.Add(3);
    v.Print();
    w.Print();

    NumberListStruct a;
    Init(&a);
    Add(&a, 100); Add(&a, 200); Add(&a, 300);
    Print(&a);

    return 0;
}